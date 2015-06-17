//
//  Solution.cpp
//  106_Construct_Binary_Tree_from_Inorder_and_Postorder_Traversal
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

TreeNode* Solution::buildTree(vector<int> &inorder, vector<int> &postorder)
{
	if(inorder.size() == 0)return NULL;
	TreeNode *p;
	TreeNode *root;
	stack<TreeNode *> stn;
	
	root = new TreeNode(postorder.back());
	stn.push(root);
	postorder.pop_back();
	
	while(true)
	{
		if(inorder.back() == stn.top()->val)
		{
			p = stn.top();
			stn.pop();
			inorder.pop_back();
			if(inorder.size() == 0) break;
			if(stn.size() && inorder.back() == stn.top()->val)
				continue;
			p->left = new TreeNode(postorder.back());
			postorder.pop_back();
			stn.push(p->left);
		}
		else
		{
			p = new TreeNode(postorder.back());
			postorder.pop_back();
			stn.top()->right = p;
			stn.push(p);
		}
	}
	return root;
}