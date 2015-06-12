//
//  Solution.cpp
//  003_Longest_Substring_Without_Repeating_Characters
//
//  Created by Chao Li on 6/11/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/37957/accepted-solution-bitmask-record-position-letter-appears

#include "Solution.h"

int Solution::lengthOfLongestSubstring(string s)
{
	vector<int> v(256, -1);
	int last = 0;
	int ans = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (v[s[i]] == -1 || v[s[i]] < last)
		{
			ans = max(ans, i-last+1);
		}
		else
		{
			last = v[s[i]]+1;
		}
		v[s[i]] = i;
	}
	
	return ans;
}
