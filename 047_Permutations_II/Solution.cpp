//
//  Solution.cpp
//  047_Permutations_II
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

vector<vector<int>> Solution::permuteUnique(vector<int> &nums)
{
	sort(nums.begin(), nums.end());
	vector<vector<int> >res;
	recursion(nums, 0, nums.size(), res);
	return res;
}

void Solution::recursion(vector<int> num, int i, int j, vector<vector<int> > &res)
{
	if (i == j-1) {
		res.push_back(num);
		return;
	}
	for (int k = i; k < j; k++) {
		if (i != k && num[i] == num[k]) continue;
		swap(num[i], num[k]);
		recursion(num, i+1, j, res);
	}
}