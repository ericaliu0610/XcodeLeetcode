//
//  Solution.cpp
//  043_Multiply_Strings
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/26602/brief-c-solution-using-only-strings-and-without-reversal

#include "Solution.h"

string Solution::multiply(string num1, string num2)
{
	string sum(num1.size() + num2.size(), '0');
	
	for (int i = num1.size() - 1; 0 <= i; --i) {
		int carry = 0;
		for (int j = num2.size() - 1; 0 <= j; --j) {
			int tmp = (sum[i + j + 1] - '0') + (num1[i] - '0') * (num2[j] - '0') + carry;
			sum[i + j + 1] = tmp % 10 + '0';
			carry = tmp / 10;
		}
		sum[i] += carry;
	}
	
	size_t startpos = sum.find_first_not_of("0");
	if (string::npos != startpos) {
		return sum.substr(startpos);
	}
	return "0";
}
