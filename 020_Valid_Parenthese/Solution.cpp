//
//  Solution.cpp
//  020_Valid_Parenthese
//
//  Created by Chao Li on 6/12/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/21440/sharing-my-simple-cpp-code-with-2ms

//Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
//
//The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.

#include "Solution.h"

bool Solution::isValid(string s)
{
	stack <char> stk;
	char temp = 0;
	unordered_map <char, char> bran_dict;
	bran_dict[')'] = '(';
	bran_dict[']'] = '[';
	bran_dict['}'] = '{';
	for (auto& c : s)
	{
		temp = c;
		if (temp == ')' || temp == '}' || temp == ']')
		{
			if (stk.empty() || stk.top() != bran_dict[temp])
				return false;
			else
				stk.pop();
		}
		else
			stk.push(temp);
	}
	if (stk.empty())
		return true;
	else
		return false;
}