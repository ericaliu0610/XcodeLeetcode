//
//  Solution.cpp
//  101_Symmetric_Tree
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

bool Solution::isSymmetric(TreeNode *root)
{
	if (!root) return true;
	return helper(root->left, root->right);
}

bool Solution::helper(TreeNode *p, TreeNode *q)
{
	if (!p && !q) {
		return true;
	} else if (!p || !q) {
		return false;
	}
	
	if (p->val != q->val) {
		return false;
	}
	
	return helper(p->left,q->right) && helper(p->right, q->left);
}