//
//  Solution.h
//  105_Construct_Binary_Tree_from_Preorder_and_Inorder_Traversal
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___05_Construct_Binary_Tree_from_Preorder_and_Inorder_Traversal__Solution__
#define ___05_Construct_Binary_Tree_from_Preorder_and_Inorder_Traversal__Solution__

#include <stdio.h>
#include "../000_Structures/Structures.h"
#include <vector>
#include <stack>
using namespace std;

class Solution
{
public:
	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder);
};

#endif /* defined(___05_Construct_Binary_Tree_from_Preorder_and_Inorder_Traversal__Solution__) */
