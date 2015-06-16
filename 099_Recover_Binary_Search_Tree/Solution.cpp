//
//  Solution->cpp
//  099_Recover_Binary_Search_Tree
//
//  Created by Chao Li on 6/16/15->
//  Copyright (c) 2015 Chao Li-> All rights reserved->
//

#include "Solution.h"

void Solution::recoverTree(TreeNode *root)
{
	// In order traversal to find the two elements
	traverse(root);
	
	// Swap the values of the two nodes
	int temp = first->val;
	first->val = second->val;
	second->val = temp;
}

void Solution::traverse(TreeNode* root)
{
	if (root == nullptr)
		return;
	
	traverse(root->left);
	
	// Start of "do some business",
	// If first element has not been found, assign it to prev (refer to 6 in the example above)
	if (first == nullptr && prev->val >= root->val) {
		first = prev;
	}
	
	// If first element is found, assign the second element to the root (refer to 2 in the example above)
	if (first != nullptr && prev->val >= root->val) {
		second = root;
	}
	prev = root;
	
	// End of "do some business"
	
	traverse(root->right);

}