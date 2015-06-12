//
//  Solution.cpp
//  009_Palindrome_Number
//
//  Created by Chao Li on 6/11/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//  Solution shared at https://leetcode.com/discuss/38528/44ms-c-solution

#include "Solution.h"

bool Solution::isPalindrome(int x)
{
	if (x < 0) return false;
	int p1 = 0, p2 = x;
	while (p2 > 0) {
		p1 = p1*10 + p2%10;
		p2 /= 10;
	}
	return p1 == x;
}
