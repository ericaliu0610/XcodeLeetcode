//
//  Solution.cpp
//  008_String_to_Integer
//
//  Created by Chao Li on 6/11/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/35280/my-concise-c-code

#include "Solution.h"

int Solution::myAtoi(string str)
{
	long long res = 0;
	int sign = 1;
	string::iterator iter = str.begin();
	while (*iter == ' ')
		iter++;
	if (*iter == '+' || *iter =='-')
	{
		sign = *iter++ == '-' ? -1 : 1;
	}
	while (*iter >= '0' && *iter <= '9' && iter != str.end())
	{
		res *= 10;
		res += *iter++ - '0';
		if (res > INT_MAX)
		{
			return sign > 0 ? INT_MAX : INT_MIN;
		}
	}
	
	return sign*res;
}