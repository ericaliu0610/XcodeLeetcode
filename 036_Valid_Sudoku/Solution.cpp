//
//  Solution.cpp
//  036_Valid_Sudoku
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/23901/my-short-solution-by-c-o-n2

#include "Solution.h"

bool Solution::isValidSudoku(vector<vector<char> > &board)
{
	int used1[9][9] = {0}, used2[9][9] = {0}, used3[9][9] = {0};
	
	for(int i = 0; i < board.size(); ++ i)
	{
		for(int j = 0; j < board[i].size(); ++ j)
		{
			if(board[i][j] != '.')
			{
				int num = board[i][j] - '0' - 1, k = i / 3 * 3 + j / 3;
				if(used1[i][num] || used2[j][num] || used3[k][num])
					return false;
				used1[i][num] = used2[j][num] = used3[k][num] = 1;
			}
		}
	}
	
	return true;
}