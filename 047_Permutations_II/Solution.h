//
//  Solution.h
//  047_Permutations_II
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___47_Permutations_II__Solution__
#define ___47_Permutations_II__Solution__

#include <stdio.h>
#include <vector>
using namespace std;

class Solution
{
public:
	vector<vector<int>> permuteUnique(vector<int>& nums);
	void recursion(vector<int> num, int i, int j, vector<vector<int> > &res);
};

#endif /* defined(___47_Permutations_II__Solution__) */
