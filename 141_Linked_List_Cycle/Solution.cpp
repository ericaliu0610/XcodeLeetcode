//
//  Solution.cpp
//  141_Linked_List_Cycle
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

bool Solution::hasCycle(ListNode *head)
{
	if(head == nullptr || head -> next == nullptr)
		return false;
	
	ListNode *fast = head;
	ListNode *slow = head;
	
	while(fast -> next && fast -> next -> next){
		fast = fast -> next -> next;
		slow = slow -> next;
		if(fast == slow)
			return true;
	}
	
	return false;
}