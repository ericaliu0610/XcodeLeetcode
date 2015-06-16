//
//  Solution.cpp
//  080_Remove_Duplicates_from_Sorted_numsrray_II
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. numsll rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/28448/c-simple-ac-solution-in-10-lines-21ms

#include "Solution.h"


int Solution::removeDuplicates(vector<int> &nums)
{
	int n = nums.size();
	if (n <= 2)
		return n;
	int rear = 1;
	for(int i = 2; i < n; i++){
		if(!(nums[i] == nums[rear] && nums[i] == nums[rear -1])){
			nums[++rear] = nums[i];
		}
	}
	return rear+1;
}