//
//  Solution.cpp
//  089_Gray_Code
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/2978/what-solution-gray-code-problem-extra-space-used-recursion

//The gray code is a binary numeral system where two successive values differ in only one bit.
//
//Given a non-negative integer n representing the total number of bits in the code, print the sequence of gray code. A gray code sequence must begin with 0.
#include "Solution.h"

vector<int> Solution::grayCode(int n)
{
	vector<int> result(1, 0);
	for (int i = 0; i < n; i++) {
		int curCount = result.size();
		// push back all element in result in reverse order
		while (curCount) {
			curCount--;
			int curNum = result[curCount];
			curNum += (1<<i);
			result.push_back(curNum);
		}
	}
	return result;
}
