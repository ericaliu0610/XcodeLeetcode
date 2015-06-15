//
//  Solution.cpp
//  070_Climbing_Stairs
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/28383/simple-and-clear-2ms-solution-in-c-without-recursion

#include "Solution.h"

int Solution::climbStairs(int n)
{
	int StepOne = 1;
	int StepTwo = 0;
	int ret = 0;
	for(int i=0;i<n;i++)
	{
		ret = StepOne + StepTwo;
		StepTwo = StepOne;
		StepOne = ret;
	}
	return ret;
}