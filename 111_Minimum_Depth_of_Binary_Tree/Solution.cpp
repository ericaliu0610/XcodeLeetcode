//
//  Solution.cpp
//  111_Minimum_Depth_of_Binary_Tree
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

int Solution::minDepth(TreeNode *root)
{
	if(!root) return 0;
	if(!root->left) return 1 + minDepth(root->right);
	if(!root->right) return 1 + minDepth(root->left);
	return 1+min(minDepth(root->left),minDepth(root->right));
}