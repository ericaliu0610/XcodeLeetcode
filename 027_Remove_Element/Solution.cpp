//
//  Solution.cpp
//  027_Remove_Element
//
//  Created by Chao Li on 6/12/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/3753/my-solution-for-your-reference


//	Given an array and a value, remove all instances of that value in place and return the new length.
//	The order of elements can be changed. It doesn't matter what you leave beyond the new length.
#include "Solution.h"

int Solution::removeElement(vector<int> &nums, int val)
{
	int begin = 0;
	int n = nums.size();
	for (auto &i : nums)
		if(i != val)
			nums[begin++] = i;
	return begin;
}