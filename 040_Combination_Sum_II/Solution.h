//
//  Solution.h
//  040_Combination_Sum_II
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/25442/c-backtracking-solution-with-detailed-explanation

#ifndef ___40_Combination_Sum_II__Solution__
#define ___40_Combination_Sum_II__Solution__

#include <stdio.h>
#include <vector>
using namespace std;

class Solution
{
public:
	vector<vector<int> > combinationSum2(vector<int> &num, int target);
	void findCombination(vector<vector<int>>& res, const int order, const int target, vector<int>& local, const vector<int>& num);
};

#endif /* defined(___40_Combination_Sum_II__Solution__) */
