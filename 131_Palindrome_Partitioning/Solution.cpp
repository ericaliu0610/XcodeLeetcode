//
//  Solution.cpp
//  131_Palindrome_Partitioning
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

vector<vector<string>> Solution::partition(string s)
{
	vector<vector<string> > ret;
	if(s.empty()) return ret;
	
	vector<string> path;
	dfs(0, s, path, ret);
	
	return ret;
}

void Solution::dfs(int index, string &s, vector<string> &path, vector<vector<string> > &ret)
{
	if(index == s.size()) {
		ret.push_back(path);
		return;
	}
	for(int i = index; i < s.size(); ++i) {
		if(isPalindrome(s, index, i)) {
			path.push_back(s.substr(index, i - index + 1));
			dfs(i+1, s, path, ret);
			path.pop_back();
		}
	}
}

bool Solution::isPalindrome(const string &s, int start, int end)
{
	while(start <= end) {
		if(s[start++] != s[end--])
			return false;
	}
	return true;
}