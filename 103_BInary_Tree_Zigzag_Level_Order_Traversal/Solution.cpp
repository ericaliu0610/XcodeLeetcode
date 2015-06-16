//
//  Solution.cpp
//  103_BInary_Tree_Zigzag_Level_Order_Traversal
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

vector<vector<int>> Solution::zigzagLevelOrder(TreeNode *root)
{
	if(root!=NULL)
	{
		traverse(root, 0);
	}
	
	for(int i=1;i<result.size();i+=2)
	{
		vector<int>* v = &result[i];
	std:reverse(v->begin(), v->end());
	}
	return result;
}

void Solution::traverse(TreeNode *node, int level)
{
	if(node == NULL) return;
	
	vector<int>* row = getRow(level);
	row->push_back(node->val);
	
	traverse(node->left, level+1);
	traverse(node->right, level+1);
}

vector<int>* Solution::getRow(int level)
{
	if(result.size()<=level)
	{
		vector<int> newRow;
		result.push_back(newRow);
	}
	return &result[level];
}