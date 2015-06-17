//
//  Solution.h
//  113_Path_Sum_II
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___13_Path_Sum_II__Solution__
#define ___13_Path_Sum_II__Solution__

#include <stdio.h>
#include <vector>
#include "../000_Structures/Structures.h"
using namespace std;

class Solution
{
public:
	vector<vector<int>> pathSum(TreeNode* root, int sum);
private:
	void pathSumRec(TreeNode* root, int sum, vector<vector<int> >& result, vector<int>& cur_path);
};

#endif /* defined(___13_Path_Sum_II__Solution__) */
