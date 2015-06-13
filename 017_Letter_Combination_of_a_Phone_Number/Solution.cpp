//
//  Solution.cpp
//  017_Letter_Combination_of_a_Phone_Number
//
//  Created by Chao Li on 6/12/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/11261/my-iterative-sollution-very-simple-under-15-lines

#include "Solution.h"

vector<string> Solution::letterCombinations(string &digits)
{
	if (digits.size() == 0)
	{
		return vector<string>;
	}
	vector<string> res;
	string charmap[10] = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	res.push_back("");
	for (int i = 0; i < digits.size(); i++)
	{
		vector<string> tempres;
		string chars = charmap[digits[i] - '0'];
		for (int c = 0; c < chars.size();c++)
			for (int j = 0; j < res.size();j++)
				tempres.push_back(res[j]+chars[c]);
		res = tempres;
	}
	return res;
}
