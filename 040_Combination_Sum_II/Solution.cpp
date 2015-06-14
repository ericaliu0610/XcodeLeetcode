//
//  Solution.cpp
//  040_Combination_Sum_II
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/25442/c-backtracking-solution-with-detailed-explanation

#include "Solution.h"

vector<vector<int> > Solution::combinationSum2(vector<int> &num, int target)
{
	vector<vector<int>> res;
	sort(num.begin(),num.end());
	vector<int> local;
	findCombination(res, 0, target, local, num);
	return res;
}

void Solution::findCombination(vector<vector<int> > &res, const int order, const int target, vector<int> &local, const vector<int> &num)
{
	if(target==0)
	{
		res.push_back(local);
		return;
	}
	else
	{
		for(int i = order;i<num.size();i++) // iterative component
		{
			if(num[i]>target) return;
			if(i&&num[i]==num[i-1]&&i>order) continue; // check duplicate combination
			local.push_back(num[i]),
			findCombination(res,i+1,target-num[i],local,num); // recursive componenet
			local.pop_back();
		}
	}
}