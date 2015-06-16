//
//  Solution.h
//  079_Word_Search
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/27445/my-19ms-accepted-c-code

#ifndef ___79_Word_Search__Solution__
#define ___79_Word_Search__Solution__

#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

class Solution
{
	int m;
	int n;
public:
	bool exist(vector<vector<char>>& board, string word);
	bool isFound(vector<vector<char> > &board, const char* w, int x, int y);
};

#endif /* defined(___79_Word_Search__Solution__) */
