//
//  Solution.cpp
//  116_Populating_Next_Right_Pointers_in_Each_Node
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

void Solution::connect(TreeLinkNode *root)
{
	if (root == NULL) return;
	TreeLinkNode *pre = root;
	TreeLinkNode *cur = NULL;
	while(pre->left) {
		cur = pre;
		while(cur) {
			cur->left->next = cur->right;
			if(cur->next) cur->right->next = cur->next->left;
			cur = cur->next;
		}
		pre = pre->left;
	}
}