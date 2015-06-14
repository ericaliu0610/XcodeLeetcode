//
//  Solution.h
//  039_Combination_Sum
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/19661/concise-backtracking-solution

#ifndef ___39_Combination_Sum__Solution__
#define ___39_Combination_Sum__Solution__

#include <stdio.h>
#include <vector>
using namespace std;

class Solution
{
public:
	vector<vector<int> > combinationSum(vector<int> &num, int target);
	void search(vector<int>& num, int next, vector<int>& pSol, int target, vector<vector<int> >& result);
	
};


#endif /* defined(___39_Combination_Sum__Solution__) */
