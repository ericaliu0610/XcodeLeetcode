//
//  Solution.cpp
//  051_N-Queens
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/22526/c-6ms-solution-use-bitmask

#include "Solution.h"

vector<vector<string>> Solution::solveNQueens(int n)
{
	this->n = n;
	vector<vector<string>> res;
	nQueens(0, 0, 0, 0, res);
	return res;
}

string Solution::getNq(int p)
{
	string s(n, '.');
	s[p] = 'Q';
	return s;
}

void Solution::nQueens(int p, int l, int m, int r, vector<vector<string> > &res)
{
	static vector<string> ans;
	if (p >= n)
	{
		res.push_back(ans);
		return ;
	}
	int mask = l | m | r;
	for (int i = 0, b = 1; i < n; ++ i, b <<= 1)
	{
		if (!(mask & b))
		{
			ans.push_back(getNq(i));
			nQueens(p + 1, (l | b) >> 1, m | b, (r | b) << 1, res);
			ans.pop_back();
		}
	}
}