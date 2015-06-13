//
//  Solution.cpp
//  021_Generate_Parentheses
//
//  Created by Chao Li on 6/12/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/14436/concise-recursive-c-solution

#include "Solution.h"

vector<string> Solution::generateParenthesis(int n)
{
	vector<string> res;
	addingpar(res, "", n, 0);
	return res;
}

void Solution::addingpar(vector<string> &v, string str, int n, int m)
{
	if(n==0 && m==0)
	{
		v.push_back(str);
		return;
	}
	if(m > 0){ addingpar(v, str+")", n, m-1); }
	if(n > 0){ addingpar(v, str+"(", n-1, m+1); }
}