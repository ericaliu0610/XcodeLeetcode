//
//  Solution.cpp
//  115_Distinct_Subsequences
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

int Solution::numDistinct(string s, string t)
{
	int m = t.length();
	int n = s.length();
	if (m > n) return 0;    // impossible for subsequence
	vector<vector<int>> path(m+1, vector<int>(n+1, 0));
	for (int k = 0; k <= n; k++) path[0][k] = 1;    // initialization
	
	for (int j = 1; j <= n; j++) {
		for (int i = 1; i <= m; i++) {
			path[i][j] = path[i][j-1] + (t[i-1] == s[j-1] ? path[i-1][j-1] : 0);
		}
	}
	
	return path[m][n];
}