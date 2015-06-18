//
//  Solution.cpp
//  142_Linked_List_Cycle_II
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

ListNode* Solution::detectCycle(ListNode *head)
{
	if (head == nullptr || head->next == nullptr) return nullptr;
	
	ListNode* firstp = head;
	ListNode* secondp = head;
	bool isCycle = false;
	
	while(firstp != nullptr && secondp != nullptr) {
		firstp = firstp->next;
		if (secondp->next == nullptr) return nullptr;
		secondp = secondp->next->next;
		if (firstp == secondp) { isCycle = true; break; }
	}
	
	if(!isCycle) return nullptr;
	firstp = head;
	while( firstp != secondp) {
		firstp = firstp->next;
		secondp = secondp->next;
	}
	
	return firstp;
}