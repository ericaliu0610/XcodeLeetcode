//
//  Solution.cpp
//  048_Rotate_Image
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

void Solution::rotate(vector<vector<int> > &matrix)
{
	reverse(matrix.begin(), matrix.end());
	for (int i = 0; i < matrix.size(); ++i) {
		for (int j = i + 1; j < matrix[i].size(); ++j)
			swap(matrix[i][j], matrix[j][i]);
	}
}