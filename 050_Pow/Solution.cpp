//
//  Solution.cpp
//  050_Pow
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//
//	Solution shared at https://leetcode.com/discuss/28966/8-lines-of-c-7-ms

#include "Solution.h"

double Solution::myPow(double x, int n)
{
	if (n==0) return 1;
	double t = myPow(x,n/2);
	if (n%2) {
		return n<0 ? 1/x*t*t : x*t*t;
	} else {
		return t*t;
	}
}
