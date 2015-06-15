//
//  Solution.cpp
//  075_Sort_Colors
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. numsll rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/17000/share-my-one-pass-constant-space-10-line-solution

#include "Solution.h"

void Solution::sortColors(vector<int> &nums)
{
	int n = nums.size();
	int second=n-1, zero=0;
	for (int i=0; i<=second; i++) {
		while (nums[i]==2 && i<second) swap(nums[i], nums[second--]);
		while (nums[i]==0 && i>zero) swap(nums[i], nums[zero++]);
	}
}