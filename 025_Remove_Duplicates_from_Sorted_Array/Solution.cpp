//
//  Solution.cpp
//  025_Remove_Duplicates_from_Sorted_Array
//
//  Created by Chao Li on 6/12/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/25423/share-my-clean-c-code


//Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.
//
//Do not allocate extra space for another array, you must do this in place with constant memory.
//
//For example,
//Given input array nums = [1,1,2],
//
//Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length.

#include "Solution.h"

int Solution::removeDuplicates(vector<int> &nums)
{
	int count = 0;
	size_t n = nums.size();
	for(int i = 1; i < n; i++){
		if(nums[i] == nums[i-1]) count++;
		else nums[i-count] = nums[i];
	}
	return int(n)-count;
}