//
//  Solution.cpp
//  016_3Sum_Closest
//
//  Created by Chao Li on 6/12/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

int Solution::threeSumClosest(vector<int> &nums, int target)
{
	sort(nums.begin(), nums.end());
	int ans = INT_MAX;
	for (size_t i = 0; i < nums.size() - 2; i++)
	{
		size_t j = i + 1;
		size_t k = nums.size() - 1;
		while (j < k)
		{
			int sum = nums[i] + nums[j] + nums[k];
			int diff = sum - target;
			abs(double(diff)) < abs(double(ans)) ? ans = diff : (0);
			if (sum == target)
			{
				return target;
			}
			else if (sum > target)
			{
				k--;
			}
			else
			{
				j++;
			}
		}
	}
	return ans + target;
}