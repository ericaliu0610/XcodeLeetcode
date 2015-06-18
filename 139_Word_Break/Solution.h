//
//  Solution.h
//  139_Word_Break
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___39_Word_Break__Solution__
#define ___39_Word_Break__Solution__

#include <stdio.h>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution
{
public:
	bool wordBreak(string s, unordered_set<string>& wordDict);
};

#endif /* defined(___39_Word_Break__Solution__) */
