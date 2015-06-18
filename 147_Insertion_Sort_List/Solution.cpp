//
//  Solution.cpp
//  147_Insertion_Sort_List
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

ListNode* Solution::insertionSortList(ListNode *head)
{
	if (head == nullptr || head->next == nullptr)
		return head;
	
	ListNode *p = head->next;
	head->next = nullptr;
	
	while (p != nullptr)
	{
		ListNode *pNext = p->next;    /*store the next node to be insert*/
		ListNode *q = head;
		
		if (p->val < q->val)    /*node p should be the new head*/
		{
			p->next = q;
			head = p;
		}
		else
		{
			while (q != nullptr && q->next != nullptr && q->next->val <= p->val)
				q = q->next;
			p->next = q->next;
			q->next = p;
		}
		
		p = pNext;
	}
	return head;
}