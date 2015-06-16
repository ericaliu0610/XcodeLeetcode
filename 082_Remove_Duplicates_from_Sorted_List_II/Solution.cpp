//
//  Solution.cpp
//  082_Remove_Duplicates_from_Sorted_List_II
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/21524/is-this-the-best-c-solution

#include "Solution.h"


ListNode* Solution::deleteDuplicates(ListNode *head)
{
	ListNode **runner = &head;
	if(!head || !head->next)return head;
	while(*runner)
	{
		if((*runner)->next && (*runner)->next->val == (*runner)->val)
		{
			ListNode *temp = *runner;
			while(temp && (*runner)->val == temp->val)
				temp = temp->next;
			*runner = temp;
		}
		else
			runner = &((*runner)->next);
	}
	return head;
}