//
//  Solution.h
//  099_Recover_Binary_Search_Tree
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___99_Recover_Binary_Search_Tree__Solution__
#define ___99_Recover_Binary_Search_Tree__Solution__

#include <stdio.h>
#include <climits>
#include "../000_Structures/Structures.h"

class Solution
{
public:
	void recoverTree(TreeNode* root);
	Solution():first(nullptr),second(nullptr),prev(new TreeNode(INT_MIN)){};
private:
	TreeNode* first;
	TreeNode* second;
	TreeNode* prev;
	void traverse(TreeNode* root);
};

#endif /* defined(___99_Recover_Binary_Search_Tree__Solution__) */
