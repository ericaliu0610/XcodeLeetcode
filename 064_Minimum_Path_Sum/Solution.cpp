//
//  Solution.cpp
//  064_Minimum_Path_Sum
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/11297/dp-solution-linear-space

#include "Solution.h"

int Solution::minPathSum(vector<vector<int> > &grid)
{
	if(!grid.size())return 0;
	const int rows=grid.size(),cols=grid[0].size();
	// r[i] == min path sum to previous row's column i.
	vector<int> r(cols,0);
	int i,j;
	r[0]=grid[0][0];
	for(j=1;j<cols;j++){
		r[j]=grid[0][j]+r[j-1];
	}
	for(i=1;i<rows;i++){
		r[0]+=grid[i][0];
		for(j=1;j<cols;j++){
			r[j]=min(r[j-1],r[j])+grid[i][j];
		}
	}
	return r[cols-1];
}