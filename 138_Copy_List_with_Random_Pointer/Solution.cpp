//
//  Solution.cpp
//  138_Copy_List_with_Random_Pointer
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

//
// Here's how the 1st algorithm goes.
// Consider l1 as a node on the 1st list and l2 as the corresponding node on 2nd list.
// Step 1:
// Build the 2nd list by creating a new node for each node in 1st list.
// While doing so, insert each new node after it's corresponding node in the 1st list.
// Step 2:
// The new head is the 2nd node as that was the first inserted node.
// Step 3:
// Fix the random pointers in the 2nd list: (Remember that l1->next is actually l2)
// l2->random will be the node in 2nd list that corresponds l1->random,
// which is next node of l1->random.
// Step 4:
// Separate the combined list into 2: Splice out nodes that are part of second list.
// Return the new head that we saved in step 2.
//

RandomListNode* Solution::copyRandomList(RandomListNode *head)
{
	RandomListNode *newHead, *l1, *l2;
	if (head == NULL) return NULL;
	for (l1 = head; l1 != NULL; l1 = l1->next->next) {
		l2 = new RandomListNode(l1->label);
		l2->next = l1->next;
		l1->next = l2;
	}
	
	newHead = head->next;
	for (l1 = head; l1 != NULL; l1 = l1->next->next) {
		if (l1->random != NULL) l1->next->random = l1->random->next;
	}
	
	for (l1 = head; l1 != NULL; l1 = l1->next) {
		l2 = l1->next;
		l1->next = l2->next;
		if (l2->next != NULL) l2->next = l2->next->next;
	}
	
	return newHead;
}