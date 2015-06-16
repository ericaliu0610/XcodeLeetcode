//
//  Solution.h
//  103_BInary_Tree_Zigzag_Level_Order_Traversal
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___03_BInary_Tree_Zigzag_Level_Order_Traversal__Solution__
#define ___03_BInary_Tree_Zigzag_Level_Order_Traversal__Solution__

#include <stdio.h>
#include "../000_Structures/Structures.h"
#include <vector>
using namespace std;

class Solution
{
public:
	vector<vector<int> > zigzagLevelOrder(TreeNode *root);
private:
	vector<vector<int> > result;
	void traverse(TreeNode* node, int level);
	vector<int>* getRow(int level);
};

#endif /* defined(___03_BInary_Tree_Zigzag_Level_Order_Traversal__Solution__) */
