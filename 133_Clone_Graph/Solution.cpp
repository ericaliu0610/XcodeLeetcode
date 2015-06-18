//
//  Solution.cpp
//  133_Clone_Graph
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

UndirectedGraphNode* Solution::cloneGraph(UndirectedGraphNode *node)
{
	if (!node) return node;
	if(hash.find(node) == hash.end()) {
		hash[node] = new UndirectedGraphNode(node -> label);
		for (auto x : node -> neighbors) {
			(hash[node] -> neighbors).push_back( cloneGraph(x) );
		}
	}
	return hash[node];
}