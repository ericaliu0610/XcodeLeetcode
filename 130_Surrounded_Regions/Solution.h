//
//  Solution.h
//  130_Surrounded_Regions
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___30_Surrounded_Regions__Solution__
#define ___30_Surrounded_Regions__Solution__

#include <stdio.h>
#include <vector>
#include <deque>
using namespace std;

class Solution
{
public:
	void solve(vector<vector<char>>& board);
	void bfsBoundary(vector<vector<char> >& board, int w, int l);
};

#endif /* defined(___30_Surrounded_Regions__Solution__) */
