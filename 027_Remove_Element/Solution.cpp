//
//  Solution.cpp
//  027_Remove_Element
//
//  Created by Chao Li on 6/12/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

int Solution::removeElement(vector<int> &nums, int val)
{
	int begin = 0;
	int n = nums.size();
	for(int i = 0; i < n; i++)
		if(nums[i] != val)
    		nums[begin++]=nums[i];
	return begin;
}