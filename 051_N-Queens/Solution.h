//
//  Solution.h
//  051_N-Queens
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/22526/c-6ms-solution-use-bitmask

#ifndef ___51_N_Queens__Solution__
#define ___51_N_Queens__Solution__

#include <stdio.h>
#include <vector>
#include <string>
using namespace std;


class Solution
{
public:
	vector<vector<string>> solveNQueens(int n);
	string getNq(int p);
	void nQueens(int p, int l, int m, int r, vector<vector<string>> &res);
private:
	int n;
};

#endif /* defined(___51_N_Queens__Solution__) */
