//
//  Solution.cpp
//  006_ZigZag_Conversion
//
//  Created by Chao Li on 6/11/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/34226/simple-intuitive-c-code

#include "Solution.h"

string Solution::convert(string s, int numRows)
{
	if (s == "" || numRows == 1) return s;
	vector<string> vecstr(numRows);
	string res;
	int bounce = 0, direct = 1;
	for (int i = 0; i<s.size(); ++i) {
		vecstr[bounce].push_back(s[i]);
		if (bounce == numRows-1) direct = -1;
		else if (bounce == 0) direct = 1;
		bounce += direct;
	}
	for (auto& c : s)
		res += c;
	return res;
}
