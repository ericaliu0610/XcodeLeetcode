//
//  Solution.cpp
//  071_Simplify_Path
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/24939/c-10-lines-solution

#include "Solution.h"

string Solution::simplifyPath(string path)
{
	string res, tmp;
	vector<string> stk;
	stringstream ss(path);
	while(getline(ss,tmp,'/')) {
		if (tmp == "" or tmp == ".") continue;
		if (tmp == ".." and !stk.empty()) stk.pop_back();
		else if (tmp != "..") stk.push_back(tmp);
	}
	for(auto str : stk) res += "/"+str;
	return res.empty() ? "/" : res;
}