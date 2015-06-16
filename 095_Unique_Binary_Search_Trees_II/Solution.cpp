//
//  Solution.cpp
//  095_Unique_Binary_Search_Trees_II
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

vector<TreeNode*> Solution::generateTrees(int n)
{
	vector<TreeNode *> res(1,nullptr);
	for(int i = 1; i <= n; i++){
		vector<TreeNode *> tmp;
		for(int j = 0; j<res.size();j++){
			TreeNode* oldroot = res[j];
			TreeNode* root = new TreeNode(i);
			TreeNode* target = clone(oldroot);
			root->left = target;
			tmp.push_back(root);
			
			if(oldroot!=nullptr){
				TreeNode* tmpold = oldroot;
				while(tmpold->right!=nullptr){
					TreeNode* nonroot = new TreeNode(i);
					TreeNode *tright = tmpold->right;
					tmpold->right = nonroot;
					nonroot->left = tright;
					TreeNode *target = clone(oldroot);
					tmp.push_back(target);
					tmpold->right = tright;
					tmpold = tmpold->right;
				}
				tmpold->right = new TreeNode(i);
				TreeNode *target = clone(oldroot);
				tmp.push_back(target);
				tmpold->right = nullptr;
			}
		}
		res=tmp;
	}
	return res;
}

TreeNode* Solution::clone(TreeNode *root)
{
	if(root == nullptr)
		return nullptr;
	TreeNode* newroot = new TreeNode(root->val);
	newroot->left = clone(root->left);
	newroot->right = clone(root->right);
	return newroot;
}
