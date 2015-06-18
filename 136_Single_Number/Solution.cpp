//
//  Solution.cpp
//  136_Single_Number
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

int Solution::singleNumber(vector<int> &nums)
{
	int n = nums.size();
	int result = 0;
	for (int i = 0; i<n; i++)
	{
		result ^= nums[i];
	}
	return result;
}