//
//  Solution.h
//  101_Symmetric_Tree
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___01_Symmetric_Tree__Solution__
#define ___01_Symmetric_Tree__Solution__

#include <stdio.h>
#include "../000_Structures/Structures.h"

class Solution
{
public:
	bool isSymmetric(TreeNode* root);
private:
	bool helper(TreeNode* p, TreeNode* q);
};

#endif /* defined(___01_Symmetric_Tree__Solution__) */
