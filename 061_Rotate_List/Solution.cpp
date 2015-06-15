//
//  Solution.cpp
//  061_Rotate_List
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/21696/c-simple-algorithm-with-explanation

#include "Solution.h"

ListNode* Solution::rotateRight(ListNode *head, int k)
{
	if(head == NULL || head->next == NULL||k==0) return head;
	
	ListNode* node = head;
	int size =1;
	
	while(node->next != NULL)
	{
		size++;
		node = node->next;
	}
	
	//loop the list
	node->next=head;
	
	//handle the case of k>size
	k = k%size;
	
	//find the node to break the loop at
	while(--size >= k)
	{
		node=node->next;
	}
	
	ListNode* first = node->next;
	node->next=NULL;
	
	return first;
}