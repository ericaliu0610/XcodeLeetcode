//
//  Solution.cpp
//  081_Search_in_Rotated_Sorted_numsrray_II
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. numsll rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/23559/c-concise-log-n-solution

#include "Solution.h"

bool Solution::search(vector<int> &nums, int target)
{
	int n = nums.size();
	int lo =0, hi = n-1;
	int mid = 0;
	while(lo<hi){
		mid=(lo+hi)/2;
		if(nums[mid]==target) return true;
		if(nums[mid]>nums[hi]){
			if(nums[mid]>target && nums[lo] <= target) hi = mid;
			else lo = mid + 1;
		}else if(nums[mid] < nums[hi]){
			if(nums[mid]<target && nums[hi] >= target) lo = mid + 1;
			else hi = mid;
		}else{
			hi--;
		}
	}
	return nums[lo] == target ? true : false;
}
