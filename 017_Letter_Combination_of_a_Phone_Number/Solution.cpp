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
		return vector<string>();
	}
	vector<string> res;
	string charmap[10] = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	res.push_back("");
	for (const auto& i : digits)
	{
		vector<string> tempres;
		string chars = charmap[i - '0'];
		for (const auto& c : chars)
			for (const auto& j : res)
				tempres.push_back(j+c);
		res = tempres;
	}
	return res;
}
