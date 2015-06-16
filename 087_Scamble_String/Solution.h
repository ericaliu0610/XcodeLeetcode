//
//  Solution.h
//  087_Scamble_String
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/23930/a-simple-solution-without-dp-in-c

#ifndef ___87_Scamble_String__Solution__
#define ___87_Scamble_String__Solution__

#include <stdio.h>
#include <string>
using namespace std;

class Solution
{
public:
	bool isScamble(string s1, string s2);
	bool judge(const char* s1, const char* s2,int a,int b,int u, int v);
};

#endif /* defined(___87_Scamble_String__Solution__) */
