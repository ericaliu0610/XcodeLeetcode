//
//  Solution.cpp
//  062_Unique_Paths
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

int Solution::uniquePaths(int m, int n)
{
	vector<int> ways(m);
	vector<int> ways1;
	
	for (int j = n - 1; j >= 0; j--)
	{
		ways = vector<int>(m, 0);
		if (j == n - 1)
			ways[m - 1] = 1;
		for (int i = m - 1; i >= 0; i--)
		{
			if (i + 1 < m)
				ways[i] += ways[i + 1];
			if (j + 1 < n)
				ways[i] += ways1[i];
		}
		ways1 = ways;
	}
	
	return ways[0];
}