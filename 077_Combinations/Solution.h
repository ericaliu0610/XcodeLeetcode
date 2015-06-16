//
//  Solution.h
//  077_Combinations
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/12915/my-shortest-c-solution-using-dfs

#ifndef ___77_Combinations__Solution__
#define ___77_Combinations__Solution__

#include <stdio.h>
#include <vector>
using namespace std;

class Solution
{
public:
	vector<vector<int>> combine(int n, int k);
	void combine(vector<vector<int> > &res,vector<int> &temp,int start,int num,int n ,int k);

};

#endif /* defined(___77_Combinations__Solution__) */
