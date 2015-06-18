//
//  Solution.cpp
//  143_Reorder_List
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

void Solution::reorderList(ListNode *head)
{
	if (!head || !head->next) return;
	
	// find the middle node: O(n)
	ListNode *p1 = head, *p2 = head->next;
	while (p2 && p2->next) {
		p1 = p1->next;
		p2 = p2->next->next;
	}
	
	// cut from the middle and reverse the second half: O(n)
	ListNode *head2 = p1->next;
	p1->next = NULL;
	
	p2 = head2->next;
	head2->next = NULL;
	while (p2) {
		p1 = p2->next;
		p2->next = head2;
		head2 = p2;
		p2 = p1;
	}
	
	// merge two lists: O(n)
	for (p1 = head, p2 = head2; p1; ) {
		auto t = p1->next;
		p1 = p1->next = p2;
		p2 = t;
	}

}