//
//  Solution.cpp
//  124_Binary_Tree_Maximum_Path_Sum
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

int Solution::maxPathSum(TreeNode *root)
{
	int max = -2147483648;
	maxToRoot(root, max);
	return max;
}

int Solution::maxToRoot(TreeNode *root, int &re)
{
	if (!root) return 0;
	int l = maxToRoot(root->left, re);
	int r = maxToRoot(root->right, re);
	if (l < 0) l = 0;
	if (r < 0) r = 0;
	if (l + r + root->val > re) re = l + r + root->val;
	return root->val += max(l, r);
}