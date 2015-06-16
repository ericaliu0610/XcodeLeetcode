//
//  Solution.cpp
//  079_Word_Search
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/27445/my-19ms-accepted-c-code

#include "Solution.h"

bool Solution::exist(vector<vector<char> > &board, string word)
{
	m=board.size();
	n=board[0].size();
	for(int x=0;x<m;x++)
		for(int y=0;y<n;y++)
		{
			if(isFound(board,word.c_str(),x,y))
				return true;
		}
	return false;
}

bool Solution::isFound(vector<vector<char> > &board, const char *w, int x, int y)
{
	if(x<0||y<0||x>=m||y>=n||board[x][y]=='\0'||*w!=board[x][y])
		return false;
	if(*(w+1)=='\0')
		return true;
	char t=board[x][y];
	board[x][y]='\0';
	if(isFound(board,w+1,x-1,y)||isFound(board,w+1,x+1,y)||isFound(board,w+1,x,y-1)||isFound(board,w+1,x,y+1))
		return true;
	board[x][y]=t;
	return false;
}