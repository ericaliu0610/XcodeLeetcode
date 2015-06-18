//
//  Solution.cpp
//  137_Single_Number_II
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

int Solution::singleNumber(vector<int> &nums)
{
	int n = nums.size();
	int ones = 0, twos = 0;
	for(int i = 0; i < n; i++){
		ones = (ones ^ nums[i]) & ~twos;
		twos = (twos ^ nums[i]) & ~ones;
	}
	return ones;
}