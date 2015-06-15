//
//  Solution.cpp
//  067_Add_Binary
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/25593/short-code-by-c

#include "Solution.h"

string Solution::addBinary(string a, string b)
{
	string s = "";
	
	int c = 0, i = a.size() - 1, j = b.size() - 1;
	while(i >= 0 || j >= 0 || c == 1)
	{
		c += i >= 0 ? a[i --] - '0' : 0;
		c += j >= 0 ? b[j --] - '0' : 0;
		s = char(c % 2 + '0') + s;
		c /= 2;
	}
	
	return s;
}