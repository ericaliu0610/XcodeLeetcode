//
//  Solution.h
//  023_Swap_Nodes_in_Pairs
//
//  Created by Chao Li on 6/12/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/31796/is-there-any-better-c-answer

#ifndef ___23_Swap_Nodes_in_Pairs__Solution__
#define ___23_Swap_Nodes_in_Pairs__Solution__

#include <stdio.h>
#include "../000_Structures/Structures.h"

class Solution
{
public:
	void swapNode(ListNode* pre, ListNode *first, ListNode* second);
	ListNode *swapPairs(ListNode *head);
};

#endif /* defined(___23_Swap_Nodes_in_Pairs__Solution__) */
