//
//  Solution.h
//  109_Convert_Sorted_List_to_Binary_Search_Tree
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___09_Convert_Sorted_List_to_Binary_Search_Tree__Solution__
#define ___09_Convert_Sorted_List_to_Binary_Search_Tree__Solution__

#include <stdio.h>
#include "../000_Structures/Structures.h"

class Solution
{
public:
	TreeNode* sortedListToBST(ListNode* head);
private:
	int count(ListNode* node);
	TreeNode* generate(int n);
	ListNode* list;
};

#endif /* defined(___09_Convert_Sorted_List_to_Binary_Search_Tree__Solution__) */
