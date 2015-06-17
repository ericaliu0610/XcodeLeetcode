//
//  Solution.cpp
//  120_Triangle
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

int Solution::minimumTotal(vector<vector<int> > &triangle)
{
	int n = triangle.size();
	vector<int> minlen(triangle.back());
	for (int layer = n-2; layer >= 0; layer--) // For each layer
	{
		for (int i = 0; i <= layer; i++) // Check its every 'node'
		{
			// Find the lesser of its two children, and sum the current value in the triangle with it.
			minlen[i] = min(minlen[i], minlen[i+1]) + triangle[layer][i];
		}
	}
	return minlen[0];
}
