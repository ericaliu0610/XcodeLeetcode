//
//  Solution.h
//  110_Balanced_Binary_Tree
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___10_Balanced_Binary_Tree__Solution__
#define ___10_Balanced_Binary_Tree__Solution__

#include <stdio.h>
#include <cmath>
#include <algorithm>
#include "../000_Structures/Structures.h"
using namespace std;

class Solution
{
public:
	bool isBalanced(TreeNode* root);
private:
	int depth(TreeNode* root);
};

#endif /* defined(___10_Balanced_Binary_Tree__Solution__) */
