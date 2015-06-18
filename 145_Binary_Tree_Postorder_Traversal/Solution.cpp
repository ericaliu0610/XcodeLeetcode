//
//  Solution.cpp
//  145_Binary_Tree_Postorder_Traversal
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

vector<int> Solution::postorderTraversal(TreeNode *root)
{
	stack<TreeNode*> nodeStack;
	vector<int> result;
	//base case
	if(root==NULL)
		return result;
	nodeStack.push(root);
	while(!nodeStack.empty())
	{
		TreeNode* node= nodeStack.top();
		result.push_back(node->val);
		nodeStack.pop();
		if(node->left)
			nodeStack.push(node->left);
		if(node->right)
			nodeStack.push(node->right);
	}
	reverse(result.begin(),result.end());
	return result;
}