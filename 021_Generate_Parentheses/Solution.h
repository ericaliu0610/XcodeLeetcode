//
//  Solution.h
//  021_Generate_Parentheses
//
//  Created by Chao Li on 6/12/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/14436/concise-recursive-c-solution

#ifndef ___21_Generate_Parentheses__Solution__
#define ___21_Generate_Parentheses__Solution__

#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
	vector<string> generateParenthesis(int n);
	void addingpar(vector<string> &v, string str, int n, int m);
};

#endif /* defined(___21_Generate_Parentheses__Solution__) */
