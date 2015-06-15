//
//  Solution.cpp
//  046_Permutations
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/18212/my-elegant-recursive-c-solution-with-inline-explanation
#include "Solution.h"

vector<vector<int>> Solution::permute(vector<int> &nums)
{
	vector<vector<int> > result;
	
	permuteRecursive(nums, 0, result);
	return result;
}

void Solution::permuteRecursive(vector<int> &num, int begin, vector<vector<int> > &result)
{
	if (begin >= num.size())
	{
		// one permutation instance
		result.push_back(num);
		return;
	}
	
	for (int i = begin; i < num.size(); i++)
	{
		swap(num[begin], num[i]);
		permuteRecursive(num, begin + 1, result);
		// reset
		swap(num[begin], num[i]);
	}
}