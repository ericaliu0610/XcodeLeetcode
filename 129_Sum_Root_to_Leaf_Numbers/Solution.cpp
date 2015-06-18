//
//  Solution.cpp
//  129_Sum_Root_to_Leaf_Numbers
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

int Solution::sumNumbers(TreeNode *root)
{
	if (root == nullptr)
		return 0;
	return sumR(root, 0);
}

int Solution::sumR(TreeNode* root, int x)
{
	if (root->right == nullptr && root->left == nullptr)
		return 10 * x + root->val;
	int val = 0;
	if (root->left != nullptr)
		val += sumR(root->left, 10 * x + root->val);
	if (root->right != nullptr)
		val += sumR(root->right, 10 * x + root->val);
	return val;
}