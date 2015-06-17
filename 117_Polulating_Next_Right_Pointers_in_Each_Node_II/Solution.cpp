//
//  Solution.cpp
//  117_Polulating_Next_Right_Pointers_in_Each_Node_II
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

void Solution::connect(TreeLinkNode *root)
{
	TreeLinkNode *head = nullptr; //head of the next level
	TreeLinkNode *prev = nullptr; //the leading node on the next level
	TreeLinkNode *cur = root;  //current node of current level
	
	while (cur != nullptr) {
		
		while (cur != nullptr) { //iterate on the current level
			//left child
			if (cur->left != nullptr) {
				if (prev != nullptr) {
					prev->next = cur->left;
				} else {
					head = cur->left;
				}
				prev = cur->left;
			}
			//right child
			if (cur->right != nullptr) {
				if (prev != nullptr) {
					prev->next = cur->right;
				} else {
					head = cur->right;
				}
				prev = cur->right;
			}
			//move to next node
			cur = cur->next;
		}
		
		//move to next level
		cur = head;
		head = nullptr;
		prev = nullptr;
	}
}