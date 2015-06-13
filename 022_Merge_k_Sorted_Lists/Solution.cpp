//
//  Solution.cpp
//  022_Merge_k_Sorted_Lists
//
//  Created by Chao Li on 6/12/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/20774/sharing-straightforward-solution-without-structure-vector

//Merge k sorted linked lists and return it as one sorted list. Analyze and describe its complexity.


#include "Solution.h"

ListNode* Solution::mergeKLists(vector<ListNode *> &lists)
{
	if (lists.empty()) return nullptr;
	int len = lists.size();
	while (len > 1)
	{
		for (int i = 0; i < len / 2; ++i)
		{
			lists[i] = mergeTwoLists(lists[i], lists[len - 1 - i]);
		}
		len = (len + 1) / 2;
	}
	
	return lists.front();
}

ListNode* Solution::mergeTwoLists(ListNode *l1, ListNode *l2)
{
	if (nullptr == l1) return l2;
	else if (nullptr == l2) return l1;
	if (l1->val <= l2->val)
	{
		l1->next = mergeTwoLists(l1->next, l2);
		return l1;
	}
	else
	{
		l2->next = mergeTwoLists(l1, l2->next);
		return l2;
	}
}