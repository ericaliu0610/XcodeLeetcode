//
//  Solution.cpp
//  035_Search_Insert_Position
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

int Solution::searchInsert(vector<int> &nums, int target)
{
	int n = nums.size();
	int low = 0, high = n-1;
	while(low<=high){
		int mid = (low+high)/2;
		if(nums[mid] == target) return mid;
		else if(nums[mid] > target) high = mid-1;
		else low = mid+1;
	}
	return low;
}