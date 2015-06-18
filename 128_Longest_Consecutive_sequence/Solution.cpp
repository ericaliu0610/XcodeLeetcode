//
//  Solution.cpp
//  128_Longest_Consecutive_sequence
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

int Solution::longestConsecutive(vector<int> &nums)
{
	unordered_map<int, int> m;
	int r = 0;
	for (int i : nums) {
		if (m[i]) continue;
		r = max(r, m[i] = m[i + m[i + 1]] = m[i - m[i - 1]] = m[i + 1] + m[i - 1] + 1);
	}
	return r;
}