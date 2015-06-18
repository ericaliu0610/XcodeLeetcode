//
//  Solution.h
//  149_Max_Points_on_a_Line
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___49_Max_Points_on_a_Line__Solution__
#define ___49_Max_Points_on_a_Line__Solution__
#include <map>
#include <stdio.h>
#include <vector>
#include "../000_Structures/Structures.h"
using namespace std;

class Solution
{
public:
	int maxPoints(vector<Point>& points);
	int GCD(int a, int b);
};


#endif /* defined(___49_Max_Points_on_a_Line__Solution__) */
