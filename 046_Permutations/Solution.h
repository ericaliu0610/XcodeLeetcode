//
//  Solution.h
//  046_Permutations
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/18212/my-elegant-recursive-c-solution-with-inline-explanation

#ifndef ___46_Permutations__Solution__
#define ___46_Permutations__Solution__

#include <stdio.h>
#include <vector>
using namespace std;

class Solution
{
	vector<vector<int>> permute(vector<int>& nums);
	void permuteRecursive(vector<int> &num, int begin, vector<vector<int> > &result);
};

#endif /* defined(___46_Permutations__Solution__) */