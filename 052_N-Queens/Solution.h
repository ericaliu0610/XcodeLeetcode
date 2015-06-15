//
//  Solution.h
//  052_N-Queens
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//

#ifndef ___52_N_Queens__Solution__
#define ___52_N_Queens__Solution__

#include <stdio.h>
#include <vector>
using namespace std;

class Solution
{
	int find(int n, int left, int i, int r, vector<int>&rows,vector<int>&d1,vector<int>&d2);
	int totalNQueens(int n);
};

#endif /* defined(___52_N_Queens__Solution__) */
