//
//  Solution.cpp
//  012_Longest_Common_Prefix
//
//  Created by Chao Li on 6/12/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/39646/share-my-simple-c-code-with-4ms

#include "Solution.h"

string Solution::longestCommonPrefix(vector<string> &strs)
{
	string res;
	if(strs.size() == 0) return res;
	if(strs.size() == 1) return strs[0];
	for(int i=0; i<strs[0].size(); ++i)
	{
		char text = strs[0][i];
		for(int j=1; j<strs.size(); ++j)
		{
			if(i >= strs[j].size() || text != strs[j][i])
				return res;
		}
		res.push_back(text);
	}
	return res;
}