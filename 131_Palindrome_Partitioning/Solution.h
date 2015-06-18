//
//  Solution.h
//  131_Palindrome_Partitioning
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___31_Palindrome_Partitioning__Solution__
#define ___31_Palindrome_Partitioning__Solution__

#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
	vector<vector<string>> partition(string s);
private:
	void dfs(int index, string& s, vector<string>& path, vector<vector<string> >& ret);
	bool isPalindrome(const string& s, int start, int end);
};

#endif /* defined(___31_Palindrome_Partitioning__Solution__) */
