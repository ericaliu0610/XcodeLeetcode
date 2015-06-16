//
//  Solution.cpp
//  083_Remove_Duplicates_from_Sorted_List
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/7188/concise-solution-and-memory-freeing

#include "Solution.h"

ListNode* Solution::deleteDuplicates(ListNode *head)
{
	ListNode* cur = head;
	while (cur) {
		while (cur->next && cur->val == cur->next->val)
			cur->next = cur->next->next;
		cur = cur->next;
	}
	return head;
}