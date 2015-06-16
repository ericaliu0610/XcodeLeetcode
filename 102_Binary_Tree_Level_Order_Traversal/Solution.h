//
//  Solution.h
//  102_Binary_Tree_Level_Order_Traversal
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___02_Binary_Tree_Level_Order_Traversal__Solution__
#define ___02_Binary_Tree_Level_Order_Traversal__Solution__

#include <stdio.h>
#include <vector>
#include "../000_Structures/Structures.h"
using namespace std;

class Solution
{
public:
	vector<vector<int>> levelOrder(TreeNode* root);
private:
	vector<vector<int>> ret;
	void buildVector(TreeNode* root, int depth);
};

#endif /* defined(___02_Binary_Tree_Level_Order_Traversal__Solution__) */
