//
//  Solution.h
//  129_Sum_Root_to_Leaf_Numbers
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___29_Sum_Root_to_Leaf_Numbers__Solution__
#define ___29_Sum_Root_to_Leaf_Numbers__Solution__

#include <stdio.h>
#include "../000_Structures/Structures.h"

class Solution
{
public:
	int sumNumbers(TreeNode* root);
private:
	int sumR(TreeNode* root, int x);
};

#endif /* defined(___29_Sum_Root_to_Leaf_Numbers__Solution__) */
