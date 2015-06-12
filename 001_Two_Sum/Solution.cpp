//
//  Solution.cpp
//  001_Two_Sum
//
//  Created by Chao Li on 5/25/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/39776/16ms-c-solution-easy-to-understand

#include "Solution.h"

Solution::Solution()
{
}

vector<int> Solution::twoSum(vector<int>& nums, int target)
{
	std::unordered_map<int,int> store;
	for (int i = 0; i < nums.size(); ++i)
	{
		auto itr = store.find(nums[i]);
		if(itr != store.end())
			return std::vector<int> {itr->second+1,i+1};
		else
			store[target-nums[i]] = i;
	}
}

