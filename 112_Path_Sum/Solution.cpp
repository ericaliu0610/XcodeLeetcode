//
//  Solution.cpp
//  112_Path_Sum
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

bool Solution::hasPathSum(TreeNode *root, int sum)
{
	if (root == NULL) return false;
	if (root->val == sum && root->left ==  NULL && root->right == NULL) return true;
	return hasPathSum(root->left, sum-root->val) || hasPathSum(root->right, sum-root->val);
}