//
//  Solution.h
//  019_Remove_Nth_Node_From_End_of_List
//
//  Created by Chao Li on 5/26/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___19_Remove_Nth_Node_From_End_of_List__Solution__
#define ___19_Remove_Nth_Node_From_End_of_List__Solution__

#include "../000_Structures/Structures.h"

class Solution
{
public:
	Solution();
	ListNode* removeNthFromEnd(ListNode* head, int n);
private:
	int l;
	void recursive(ListNode* h, int d, int n, ListNode* r);
};

#endif /* defined(___19_Remove_Nth_Node_From_End_of_List__Solution__) */
