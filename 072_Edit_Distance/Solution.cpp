//
//  Solution.cpp
//  072_Edit_Distance
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/10426/my-o-mn-time-and-o-n-space-solution-using-dp-with-explanation

#include "Solution.h"

int Solution::minDistance(string word1, string word2)
{
	int l1 = word1.size();
	int l2 = word2.size();
	
	vector<int> f(l2+1, 0);
	for (int j = 1; j <= l2; ++j)
		f[j] = j;
	
	for (int i = 1; i <= l1; ++i)
	{
		int prev = i;
		for (int j = 1; j <= l2; ++j)
		{
			int cur;
			if (word1[i-1] == word2[j-1]) {
				cur = f[j-1];
			} else {
				cur = min(min(f[j-1], prev), f[j]) + 1;
			}
			
			f[j-1] = prev;
			prev = cur;
		}
		f[l2] = prev;
	}
	return f[l2];
}