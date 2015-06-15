//
//  Solution.cpp
//  055_Jump_Game
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/15567/linear-and-simple-solution-in-c

#include "Solution.h"

bool Solution::canJump(vector<int> &nums)
{
	int n = nums.size();
	int i = 0;
	for (int reach = 0; i < n && i <= reach; ++i)
		reach = max(i + nums[i], reach);
	return i == n;
}