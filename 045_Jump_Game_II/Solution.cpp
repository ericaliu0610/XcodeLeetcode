//
//  Solution.cpp
//  045_Jump_Game_II
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/24044/17ms-ac-c-code-very-easy-to-understand

#include "Solution.h"

int Solution::jump(vector<int> &nums)
{
	int n = nums.size();
	int i = 0, j = 1, cnt = 0, mx;
	
	if (n == 1)
		return 0;
	while (i < n - 1 && i + nums[i] < n - 1)
	{
		for (mx = j; j <= i + nums[i]; j++)
		{
			mx = (mx + nums[mx] <= j + nums[j]) ? j : mx;
		}
		i = mx;
		cnt++;
	}
	return ++cnt; /* One more step to last index. */
}