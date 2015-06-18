//
//  Solution.h
//  124_Binary_Tree_Maximum_Path_Sum
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___24_Binary_Tree_Maximum_Path_Sum__Solution__
#define ___24_Binary_Tree_Maximum_Path_Sum__Solution__

#include <stdio.h>
#include "../000_Structures/Structures.h"
#include <algorithm>
using namespace std;

class Solution
{
public:
	int maxPathSum(TreeNode* root);
private:
	int maxToRoot(TreeNode* root, int &re);
};

#endif /* defined(___24_Binary_Tree_Maximum_Path_Sum__Solution__) */
