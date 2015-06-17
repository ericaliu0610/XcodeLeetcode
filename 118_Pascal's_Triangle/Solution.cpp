//
//  Solution.cpp
//  118_Pascal's_Triangle
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

vector<vector<int>> Solution::generate(int numRows)
{
	vector<vector<int>> r(numRows);
	for (int i = 0; i < numRows; i++) {
		r[i].resize(i + 1);
		r[i][0] = r[i][i] = 1;
		
		for (int j = 1; j < i; j++)
			r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
	}
	
	return r;
}