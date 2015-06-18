//
//  Solution.h
//  140_Word_Break_II
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___40_Word_Break_II__Solution__
#define ___40_Word_Break_II__Solution__

#include <stdio.h>
#include <unordered_map>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution
{
public:
	vector<string> wordBreak(string s, unordered_set<string>& dict);
private:
	vector<string> combine(string word, vector<string> prev);
	unordered_map<string, vector<string>> m;
};

#endif /* defined(___40_Word_Break_II__Solution__) */
