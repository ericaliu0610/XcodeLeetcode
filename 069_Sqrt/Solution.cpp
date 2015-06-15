//
//  Solution.cpp
//  069_Sqrt
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/24942/a-binary-search-solution

#include "Solution.h"

int Solution::mySqrt(int x)
{
	if (x == 0)
		return 0;
	int left = 1, right = INT_MAX;
	while (true) {
		int mid = left + (right - left)/2;
		if (mid > x/mid) {
			right = mid - 1;
		} else {
			if (mid + 1 > x/(mid + 1))
				return mid;
			left = mid + 1;
		}
	}
}