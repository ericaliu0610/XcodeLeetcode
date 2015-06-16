//
//  Solution.cpp
//  098_Valid_Binary_Search_Tree
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

bool Solution::isValidBST(TreeNode *root)
{
	TreeNode* prev = NULL;
	return validate(root, prev);
}

bool Solution::validate(TreeNode *node, TreeNode *&prev)
{
	if (node == NULL) return true;
	if (!validate(node->left, prev)) return false;
	if (prev != NULL && prev->val >= node->val) return false;
	prev = node;
	return validate(node->right, prev);
}