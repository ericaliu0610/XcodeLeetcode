//
//  Solution.h
//  127_Word_Ladder
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___27_Word_Ladder__Solution__
#define ___27_Word_Ladder__Solution__

#include <stdio.h>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution
{
public:
	int ladderLength(string start, string end, unordered_set<string> &dict);
};

#endif /* defined(___27_Word_Ladder__Solution__) */
