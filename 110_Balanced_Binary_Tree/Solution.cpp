//
//  Solution.cpp
//  110_Balanced_Binary_Tree
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

bool Solution::isBalanced(TreeNode *root)
{
	if (root == NULL) return true;
	
	int left=depth(root->left);
	int right=depth(root->right);
	
	return abs(double(left - right)) <= 1 && isBalanced(root->left) && isBalanced(root->right);
}

int Solution::depth(TreeNode *root)
{
	if (root == NULL) return 0;
	return max(depth(root -> left), depth (root -> right)) + 1;
}