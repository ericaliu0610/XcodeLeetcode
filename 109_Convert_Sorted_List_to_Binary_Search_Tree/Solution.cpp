//
//  Solution.cpp
//  109_Convert_Sorted_List_to_Binary_Search_Tree
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

TreeNode* Solution::sortedListToBST(ListNode *head)
{
	this->list = head;
	return generate(count(head));
}

int Solution::count(ListNode *node)
{
	int size = 0;
	while (node) {
		++size;
		node = node->next;
	}
	return size;
}

TreeNode* Solution::generate(int n)
{
	if (n == 0)
		return NULL;
	TreeNode *node = new TreeNode(0);
	node->left = generate(n / 2);
	node->val = list->val;
	list = list->next;
	node->right = generate(n - n / 2 - 1);
	return node;
}