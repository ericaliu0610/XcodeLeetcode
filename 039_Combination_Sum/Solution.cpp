//
//  Solution.cpp
//  039_Combination_Sum
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/19661/concise-backtracking-solution

#include "Solution.h"

vector<vector<int> > Solution::combinationSum(vector<int> &num, int target)
{
	vector<vector<int> > result;
	sort(num.begin(), num.end());
	vector<int> pSol;
	search(num, 0, pSol, target, result);
	return result;
}

void Solution::search(vector<int> &num, int next, vector<int> &pSol, int target, vector<vector<int> > &result)
{
	if(target == 0)
	{
		result.push_back(pSol);
		return;
	}
	
	if(next == num.size() || target - num[next] < 0)
		return;
	
	pSol.push_back(num[next]);
	search(num, next, pSol, target - num[next], result);
	pSol.pop_back();
	
	search(num, next + 1, pSol, target, result);
}