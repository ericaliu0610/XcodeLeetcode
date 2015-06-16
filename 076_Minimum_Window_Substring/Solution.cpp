//
//  Solution.cpp
//  076_Minimum_Window_Substring
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

string Solution::minWindow(string s, string t)
{
	if (s.empty() || t.empty())
	{
		return "";
	}
	int count = t.size();
	int require[128] = {0};
	bool chset[128] = {false};
	for (int i = 0; i < count; ++i)
	{
		require[t[i]]++;
		chset[t[i]] = true;
	}
	int i = -1;
	int j = 0;
	int minLen = INT_MAX;
	int minIdx = 0;
	while (i < (int)s.size() && j < (int)s.size())
	{
		if (count)
		{
			i++;
			require[s[i]]--;
			if (chset[s[i]] && require[s[i]] >= 0)
			{
				count--;
			}
		}
		else
		{
			if (minLen > i - j + 1)
			{
				minLen = i - j + 1;
				minIdx = j;
			}
			require[s[j]]++;
			if (chset[s[j]] && require[s[j]] > 0)
			{
				count++;
			}
			j++;
		}
	}
	if (minLen == INT_MAX)
	{
		return "";
	}
	return s.substr(minIdx, minLen);
}
