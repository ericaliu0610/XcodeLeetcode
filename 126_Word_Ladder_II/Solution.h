//
//  Solution.h
//  126_Word_Ladder_II
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___26_Word_Ladder_II__Solution__
#define ___26_Word_Ladder_II__Solution__

#include <stdio.h>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

class Solution
{
public:
	vector<vector<string>> findLadders(string start, string end, unordered_set<string> &dict);
};

#endif /* defined(___26_Word_Ladder_II__Solution__) */
