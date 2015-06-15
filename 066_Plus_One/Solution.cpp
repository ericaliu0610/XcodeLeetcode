//
//  Solution.cpp
//  066_Plus_One
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/14616/is-it-a-simple-code-c

#include "Solution.h"

vector<int> Solution::plusOne(vector<int> &digits)
{
	int n = digits.size();
	for (int i = n - 1; i >= 0; --i)
	{
		if (digits[i] == 9)
		{
			digits[i] = 0;
		}
		else
		{
			digits[i]++;
			return digits;
		}
	}
	digits[0] =1;
	digits.push_back(0);
	return digits;
}