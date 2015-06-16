//
//  Solution.cpp
//  102_Binary_Tree_Level_Order_Traversal
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

vector<vector<int>> Solution::levelOrder(TreeNode* root)
{
	buildVector(root, 0);
	return ret;
}

void Solution::buildVector(TreeNode *root, int depth)
{
	if(root == NULL) return;
	if(ret.size() == depth)
		ret.push_back(vector<int>());
	
	ret[depth].push_back(root->val);
	buildVector(root->left, depth + 1);
	buildVector(root->right, depth + 1);
}