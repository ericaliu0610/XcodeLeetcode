//
//  Solution.cpp
//  094_Binary_Tree_Inorder_Traversal
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

vector<int> Solution::inorderTraversal(TreeNode *root)
{
	vector<int> vector;
	stack<TreeNode *> stack;
	TreeNode *pCurrent = root;
	
	while(!stack.empty() || pCurrent)
	{
		if(pCurrent)
		{
			stack.push(pCurrent);
			pCurrent = pCurrent->left;
		}
		else
		{
			TreeNode *pNode = stack.top();
			vector.push_back(pNode->val);
			stack.pop();
			pCurrent = pNode->right;
		}
	}
	return vector;
}