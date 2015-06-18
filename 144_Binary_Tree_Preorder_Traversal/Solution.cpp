//
//  Solution.cpp
//  144_Binary_Tree_Preorder_Traversal
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

vector<int> Solution::preorderTraversal(TreeNode *root)
{
	if (root==NULL) {
		return vector<int>();
	}
	vector<int> result;
	stack<TreeNode *> treeStack;
	treeStack.push(root);
	while (!treeStack.empty()) {
		TreeNode *temp = treeStack.top();
		result.push_back(temp->val);
		treeStack.pop();
		if (temp->right!=NULL) {
			treeStack.push(temp->right);
		}
		if (temp->left!=NULL) {
			treeStack.push(temp->left);
		}
	}
	return result;
}
