//
//  Solution.cpp
//  007_Reverse_Integer
//
//  Created by Chao Li on 6/11/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/39803/4ms-c-solution-easy-to-understand

#include "Solution.h"

int Solution::reverse(int x)
{
	long result = 0;
	while(x != 0)
	{
		result = result*10 + x % 10;
		x /= 10;
	}
	return (result > INT_MAX || result < INT_MIN)? 0 : result;
}