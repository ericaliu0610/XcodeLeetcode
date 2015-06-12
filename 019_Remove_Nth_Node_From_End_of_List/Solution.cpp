//
//  Solution.cpp
//  019_Remove_Nth_Node_From_End_of_List
//
//  Created by Chao Li on 5/26/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

Solution::Solution()
{
}

ListNode* Solution::removeNthFromEnd(ListNode* head, int n)
{
	ListNode* r;
	recursive(head, 0, n, r);
	return head;
}

void Solution::recursive(ListNode* h, int d, int n, ListNode* r)
{
	if (!h->next)
	{
		l = d;
		return;
	}
	recursive(h->next, d+1, n, r);
	if (l-d == n-1)
	{
		h->next = h->next->next;
	}
}
