//
//  Solution.cpp
//  104_Maximum_Depth_of_Binary_Tree
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

int Solution::maxDepth(TreeNode *root)
{
	return root == NULL ? 0 : std::max(maxDepth(root -> left), maxDepth(root -> right)) + 1;
}