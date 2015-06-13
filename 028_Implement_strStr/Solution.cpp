//
//  Solution.cpp
//  028_Implement_strStr
//
//  Created by Chao Li on 6/12/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/19962/a-very-clean-solution-brute-force

#include "Solution.h"

int Solution::strStr(string haystack, string needle)
{
	if (!haystack || !needle) return -1;
	for (int i = 0; ; ++i) {
		for (int j = 0; ; ++j) {
			if (needle[j] == 0) return i;
			if (haystack[i + j] == 0) return -1;
			if (haystack[i + j] != needle[j]) break;
		}
	}
}