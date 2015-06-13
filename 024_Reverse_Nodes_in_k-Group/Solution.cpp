//
//  Solution.cpp
//  024_Reverse_Nodes_in_k-Group
//
//  Created by Chao Li on 6/12/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/27468/20-line-iterative-c-solution


//Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.
//
//If the number of nodes is not a multiple of k then left-out nodes in the end should remain as it is.
//
//You may not alter the values in the nodes, only nodes itself may be changed.
//
//Only constant memory is allowed.

#include "Solution.h"

ListNode* Solution::reverseKGroup(ListNode *head, int k)
{
	if (head==nullptr||k==1) return head;
	int num = 0;
	ListNode *preheader = new ListNode(-1);
	preheader->next = head;
	ListNode *cur, *nex, *pre = preheader;
	//	Get the length of the list
	while ((cur = cur->next))
		num++;
	while (num >= k) {
		cur = pre->next;
		nex = cur->next;
		//	Reverse the sublist iteratively
		for (int i = 1; i < k; ++i) {
			cur->next = nex->next;
			nex->next = pre->next;
			pre->next = nex;
			nex = cur->next;
		}
		pre = cur;
		num -= k;
	}
	return preheader->next;
}