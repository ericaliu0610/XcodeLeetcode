//
//  Solution.h
//  022_Merge_k_Sorted_Lists
//
//  Created by Chao Li on 6/12/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/20774/sharing-straightforward-solution-without-structure-vector

#ifndef ___22_Merge_k_Sorted_Lists__Solution__
#define ___22_Merge_k_Sorted_Lists__Solution__

#include <stdio.h>
#include "../000_Structures/Structures.h"
#include <vector>
using namespace std;

class Solution
{
public:
	ListNode *mergeTwoLists(ListNode* l1, ListNode* l2);
	ListNode *mergeKLists(vector<ListNode *> &lists);
};

#endif /* defined(___22_Merge_k_Sorted_Lists__Solution__) */
