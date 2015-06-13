//
//  Solution.cpp
//  011_Container_With_Most_Water
//
//  Created by Chao Li on 6/12/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/33541/my-short-and-easy-c-code-in-o-n

#include "Solution.h"

int Solution::maxArea(vector<int> &height)
{
	int ans = 0;
	vector<int>::iterator p1 = height.begin();
	vector<int>::iterator p2 = height.end() - 1;
	while (p1 != p2)
	{
		ans = max(min(*p1, *p2)*int(p2 - p1), ans);
		*p1 > *p2 ? p2-- : p1++;
	}
	return ans;
}
