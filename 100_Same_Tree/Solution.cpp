//
//  Solution.cpp
//  100_Same_Tree
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

bool Solution::isSameTree(TreeNode *p, TreeNode *q)
{
	if (p == NULL && q == NULL)
		return true;
	if (p == NULL && q != NULL)
		return false;
	if (p != NULL && q == NULL)
		return false;
	if (p->val != q->val)
		return false;
	bool lsame = isSameTree(p->left, q->left);
	bool rsame = isSameTree(p->right, q->right);
	return lsame && rsame;
}