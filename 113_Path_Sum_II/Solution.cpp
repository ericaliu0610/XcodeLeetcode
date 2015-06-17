//
//  Solution.cpp
//  113_Path_Sum_II
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

vector<vector<int>> Solution::pathSum(TreeNode *root, int sum)
{
	vector<vector<int> > result;
	vector<int> cur_path(0);
	pathSumRec(root, sum, result, cur_path);
	return result;
}

void Solution::pathSumRec(TreeNode *root, int sum, vector<vector<int> > &result, vector<int> &cur_path)
{
	if (root == NULL) {
		return;
	}
	
	if (root->val == sum && root->left == NULL && root->right == NULL) {
		cur_path.push_back(root->val);
		result.push_back(cur_path);
		cur_path.pop_back();
		return;
	}
	
	int sum_left = sum - root->val;
	cur_path.push_back(root->val);
	pathSumRec(root->left, sum_left, result, cur_path);
	//cur_path.pop_back();
	pathSumRec(root->right, sum_left, result, cur_path);
	cur_path.pop_back();
}