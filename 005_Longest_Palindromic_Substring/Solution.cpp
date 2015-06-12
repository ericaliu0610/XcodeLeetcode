//
//  Solution.cpp
//  005_Longest_Palindromic_Substring
//
//  Created by Chao Li on 6/11/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/32204/simple-c-solution-8ms-13-lines

#include "Solution.h"
string Solution::longestPalindrome(string s)
{
	if (s.empty()) return "";
	if (s.size() == 1) return s;
	int min_start = 0, max_len = 1;
	for (int i = 0; i < s.size();) {
		if (s.size() - i <= max_len / 2) break;
		int j = i, k = i;
		while (k < s.size()-1 && s[k+1] == s[k]) ++k; // Skip duplicate characters.
		i = k+1;
		while (k < s.size()-1 && j > 0 && s[k + 1] == s[j - 1]) { ++k; --j; } // Expand.
		int new_len = k - j + 1;
		if (new_len > max_len) { min_start = j; max_len = new_len; }
	}
	return s.substr(min_start, max_len);
}