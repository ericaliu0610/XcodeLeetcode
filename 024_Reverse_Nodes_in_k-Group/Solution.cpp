//
//  Solution.cpp
//  024_Reverse_Nodes_in_k-Group
//
//  Created by Chao Li on 6/12/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/27468/20-line-iterative-c-solution

#include "Solution.h"

ListNode* Solution::reverseKGroup(ListNode *head, int k)
{
	ListNode *reverseKGroup(ListNode *head, int k) {
		if(head==NULL||k==1) return head;
		int num=0;
		ListNode *preheader = new ListNode(-1);
		preheader->next = head;
		ListNode *cur = preheader, *nex, *pre = preheader;
		while(cur = cur->next)
			num++;
		while(num>=k) {
			cur = pre->next;
			nex = cur->next;
			for(int i=1;i<k;++i) {
				cur->next=nex->next;
				nex->next=pre->next;
				pre->next=nex;
				nex=cur->next;
			}
			pre = cur;
			num-=k;
		}
		return preheader->next;
	}
}