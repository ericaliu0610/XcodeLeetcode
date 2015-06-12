//
//  Solution.cpp
//  002_Add_Two_Numbers
//
//  Created by Chao Li on 6/11/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/35412/10-line-c-iterative-solution

#include "Solution.h"

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode *l2)
{
	ListNode preheader(-1);
	ListNode* p = &preheader;
	int vovf = 0;	// overflow value
	while (l1 || l2 || vovf)
	{
		p->next = new ListNode(((l1?l1->val:0)+(l2?l2->val:0)+vovf)%10);
		p = p->next;
		vovf = ((l1?l1->val:0)+(l2?l2->val:0)+vovf)/10;
		l1?l1=l1->next:0;
		l2?l2=l2->next:0;
	}
	return preheader.next;
}
