//
//  Solution.cpp
//  019_Remove_Nth_Node_From_End_of_List
//
//  Created by Chao Li on 5/26/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/16936/my-short-c-solution

//Given a linked list, remove the nth node from the end of list and return its head.

#include "Solution.h"

Solution::Solution()
{
}

ListNode* Solution::removeNthFromEnd(ListNode* head, int n)
{
	ListNode** t1 = &head, *t2 = head;
	for (int i = 1; i < n; ++i)
	{
		t2 = t2->next;
	}
	while (t2->next != nullptr)
	{
		t1 = &((*t1)->next);
		t2 = t2->next;
	}
	*t1 = (*t1)->next;
	return head;
}