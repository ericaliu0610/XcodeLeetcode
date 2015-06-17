//
//  Solution.h
//  107_Binary_Tree_Level_Order_Traversal_II
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___07_Binary_Tree_Level_Order_Traversal_II__Solution__
#define ___07_Binary_Tree_Level_Order_Traversal_II__Solution__

#include <stdio.h>
#include <vector>
#include "../000_Structures/Structures.h"
using namespace std;

class Solution
{
public:
	vector<vector<int>> levelOrderBottom(TreeNode* root);
private:
	void DFS(TreeNode* root, int level);
	vector<vector<int>> res;
};

#endif /* defined(___07_Binary_Tree_Level_Order_Traversal_II__Solution__) */
