//
//  Solution.h
//  095_Unique_Binary_Search_Trees_II
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___95_Unique_Binary_Search_Trees_II__Solution__
#define ___95_Unique_Binary_Search_Trees_II__Solution__

#include <stdio.h>
#include <vector>
#include "../000_Structures/Structures.h"
using namespace std;

class Solution
{
public:
	vector<TreeNode*> generateTrees(int n);
	TreeNode* clone(TreeNode* root);
}
#endif /* defined(___95_Unique_Binary_Search_Trees_II__Solution__) */
