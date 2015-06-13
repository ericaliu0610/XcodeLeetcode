//
//  Solution.cpp
//  023_Swap_Nodes_in_Pairs
//
//  Created by Chao Li on 6/12/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/31796/is-there-any-better-c-answer

//Given a linked list, swap every two adjacent nodes and return its head.

#include "Solution.h"

void Solution:: swapNode(ListNode *pre, ListNode *first, ListNode *second)
{
	pre -> next = second;
	first -> next = second -> next;
	second -> next = first;
}

ListNode* Solution::swapPairs(ListNode *head)
{
	ListNode preHead(0);
	preHead.next = head;
	ListNode * pre = &preHead;
	while (pre && pre ->next && pre -> next -> next) {
		swapNode(pre, pre -> next, pre -> next -> next);
		pre = pre -> next -> next;
	}
	return preHead.next;
}