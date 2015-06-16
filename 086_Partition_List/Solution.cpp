//
//  Solution.cpp
//  086_Partition_List
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/21032/very-concise-one-pass-solution

#include "Solution.h"

ListNode* Solution::partition(ListNode *head, int x)
{
	ListNode node1(0), node2(0);
	ListNode *p1 = &node1, *p2 = &node2;
	while (head) {
		if (head->val < x)
			p1 = p1->next = head;
		else
			p2 = p2->next = head;
		head = head->next;
	}
	p2->next = NULL;
	p1->next = node2.next;
	return node1.next;
}