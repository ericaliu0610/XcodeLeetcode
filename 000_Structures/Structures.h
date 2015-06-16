//
//  Structures.h
//  000_Structures
//
//  Created by Chao Li on 5/26/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___00_Structures__Structures__
#define ___00_Structures__Structures__

class ListNode
{
public:
	ListNode* next;
	int val;
	ListNode(int x);
	ListNode();
};

struct Interval
{
	int start;
	int end;
	Interval() : start(0), end(0) {}
	Interval(int s, int e) : start(s), end(e) {}
};

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
#endif /* defined(___00_Structures__Structures__) */
