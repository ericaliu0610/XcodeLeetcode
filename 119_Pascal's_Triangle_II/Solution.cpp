//
//  Solution.cpp
//  119_Pascal's_Triangle_II
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

vector<int> Solution::getRow(int rowIndex)
{
	vector<int> A(rowIndex+1, 0);
	A[0] = 1;
	for(int i=1; i<rowIndex+1; i++)
		for(int j=i; j>=1; j--)
			A[j] += A[j-1];
	return A;
}
