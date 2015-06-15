//
//  Solution.h
//  056_Merge_Intervals
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___56_Merge_Intervals__Solution__
#define ___56_Merge_Intervals__Solution__

#include <stdio.h>
#include "../000_Structures/Structures.h"
#include <vector>
using namespace std;

class Solution
{
public:
	vector<Interval> merge(vector<Interval>& intervals);
	static bool comp(const Interval& a, const Interval& b)
	{
		return a.start < b.start;
	}
};
#endif /* defined(___56_Merge_Intervals__Solution__) */
