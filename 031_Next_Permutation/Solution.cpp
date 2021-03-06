//
//  Solution.cpp
//  031_Next_Permutation
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/38247/algorithm-wikipedia-implementation-permutations-permutations

//Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.
//
//If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascending order).
//
//The replacement must be in-place, do not allocate extra memory.

#include "Solution.h"

void Solution::nextPermutation(vector<int> &nums)
{
	int k = -1;
	for (int i = nums.size() - 2; i >= 0; i--) {
		if (nums[i] < nums[i + 1]) {
			k = i;
			break;
		}
	}
	if (k == -1) {
		reverse(nums.begin(), nums.end());
		return;
	}
	int l = -1;
	for (int i = nums.size() - 1; i > k; i--) {
		if (nums[i] > nums[k]) {
			l = i;
			break;
		}
	}
	swap(nums[k], nums[l]);
	reverse(nums.begin() + k + 1, nums.end());
}