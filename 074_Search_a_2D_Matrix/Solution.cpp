//
//  Solution.cpp
//  074_Search_a_2D_Matrix
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/10735/dont-treat-it-as-a-2d-matrix-just-treat-it-as-a-sorted-list

#include "Solution.h"

bool Solution::searchMatrix(vector<vector<int>>& matrix, int target)
{
	int n = matrix.size();
	int m = matrix[0].size();
	int l = 0, r = m * n - 1;
	while (l != r){
		int mid = (l + r - 1) >> 1;
		if (matrix[mid / m][mid % m] < target)
			l = mid + 1;
		else
			r = mid;
	}
	return matrix[r / m][r % m] == target;
}