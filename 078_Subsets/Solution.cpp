//
//  Solution.cpp
//  078_Subsets
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/9213/my-solution-using-bit-manipulation
#include "Solution.h"

vector<vector<int>> Solution::subsets(vector<int> &nums)
{
	sort (nums.begin(), nums.end());
	int elem_num = nums.size();
	int subset_num = pow (2, elem_num);
	vector<vector<int> > subset_set (subset_num, vector<int>());
	for (int i = 0; i < elem_num; i++)
		for (int j = 0; j < subset_num; j++)
			if ((j >> i) & 1)
				subset_set[j].push_back (nums[i]);
	return subset_set;
}