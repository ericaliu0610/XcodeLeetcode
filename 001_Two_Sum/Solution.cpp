//
//  Solution.cpp
//  001_Two_Sum
//
//  Created by Chao Li on 5/25/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

Solution::Solution()
{
}

vector<int> Solution::twoSum(vector<int>& nums, int target)
{
	vector<int> result;
	vector<int> ind(nums.size());
	for (size_t i = 0; i < ind.size(); i++)
	{
		ind[i] = int(i);
	}
	result.reserve(sizeof(int)*2);
	sort(ind.begin(), ind.end(),[&](size_t i, size_t j){return nums[i] < nums[j];});
	size_t i = 0;
	size_t j = nums.size()-1;
	while (i != j) {
		int sum = nums[ind[i]]+nums[ind[j]];
		if (sum == target)
		{
			result.push_back(ind[i]);
			result.push_back(ind[j]);
		}
		else if (sum > target)
		{
			j--;
		}
		else
		{
			i++;
		}
	}
	return result;
}

