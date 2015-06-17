//
//  Solution.h
//  106_Construct_Binary_Tree_from_Inorder_and_Postorder_Traversal
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___06_Construct_Binary_Tree_from_Inorder_and_Postorder_Traversal__Solution__
#define ___06_Construct_Binary_Tree_from_Inorder_and_Postorder_Traversal__Solution__

#include <stdio.h>
#include "../000_Structures/Structures.h"
#include <vector>
#include <stack>
using namespace std;

class Solution
{
public:
	TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder);
};

#endif /* defined(___06_Construct_Binary_Tree_from_Inorder_and_Postorder_Traversal__Solution__) */
