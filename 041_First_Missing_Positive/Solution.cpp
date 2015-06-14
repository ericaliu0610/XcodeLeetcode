//
//  Solution.cpp
//  041_First_Missing_Positive
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/24013/my-short-c-solution-o-1-space-and-o-n-time

#include "Solution.h"

int Solution::firstMissingPositive(vector<int> &nums)
{
	int n = nums.size();
	for(int i = 0; i < n; ++ i)
		while(nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i])
			swap(nums[i], nums[nums[i] - 1]);
	
	for(int i = 0; i < n; ++ i)
		if(nums[i] != i + 1)
			return i + 1;
	
	return n + 1;
}