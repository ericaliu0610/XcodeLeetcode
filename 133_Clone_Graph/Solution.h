//
//  Solution.h
//  133_Clone_Graph
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___33_Clone_Graph__Solution__
#define ___33_Clone_Graph__Solution__

#include <stdio.h>
#include "../000_Structures/Structures.h"
#include <unordered_map>
using namespace std;

class Solution
{
	unordered_map<UndirectedGraphNode*, UndirectedGraphNode*> hash;
public:
	UndirectedGraphNode* cloneGraph(UndirectedGraphNode* node);
};

#endif /* defined(___33_Clone_Graph__Solution__) */
