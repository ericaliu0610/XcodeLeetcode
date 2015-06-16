//
//  Solution.h
//  098_Valid_Binary_Search_Tree
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___98_Valid_Binary_Search_Tree__Solution__
#define ___98_Valid_Binary_Search_Tree__Solution__

#include <stdio.h>
#include "../000_Structures/Structures.h"
class Solution
{
public:
	bool isValidBST(TreeNode* root);
	bool validate(TreeNode* node, TreeNode* &prev);
}

#endif /* defined(___98_Valid_Binary_Search_Tree__Solution__) */
