//
//  Solution.cpp
//  025_Remove_Duplicates_from_Sorted_Array
//
//  Created by Chao Li on 6/12/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/25423/share-my-clean-c-code

#include "Solution.h"

int Solution::removeDuplicates(vector<int> &nums)
{
	int count = 0;
	int n = nums.size();
	for(int i = 1; i < n; i++){
		if(nums[i] == nums[i-1]) count++;
		else nums[i-count] = nums[i];
	}
	return n-count;
}