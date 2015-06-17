//
//  Solution.cpp
//  107_Binary_Tree_Level_Order_Traversal_II
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

vector<vector<int>> Solution::levelOrderBottom(TreeNode *root)
{
	DFS(root, 0);
	return vector<vector<int> > (res.rbegin(), res.rend());
}

void Solution::DFS(TreeNode *root, int level)
{
	if (root == NULL) return;
	if (level == res.size()) // The level does not exist in output
	{
		res.push_back(vector<int>()); // Create a new level
	}
	
	res[level].push_back(root->val); // Add the current value to its level
	DFS(root->left, level+1); // Go to the next level
	DFS(root->right,level+1);
}