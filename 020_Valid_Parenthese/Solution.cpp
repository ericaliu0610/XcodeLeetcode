//
//  Solution.cpp
//  020_Valid_Parenthese
//
//  Created by Chao Li on 6/12/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/21440/sharing-my-simple-cpp-code-with-2ms

#include "Solution.h"

bool Solution::isValid(string s)
{
	stack <char> stk;
	char temp = 0;
	unordered_map <char, char> bran_dict;
	bran_dict[')'] = '(';
	bran_dict[']'] = '[';
	bran_dict['}'] = '{';
	for (int i=0; i<s.size(); i++) {
		temp = s[i];
		if (temp == ')' || temp == '}' || temp == ']') {
			if (stk.empty() || stk.top() != bran_dict[temp])
				return false;
			else {
				stk.pop();
			}
		}
		else
			stk.push(temp);
	}
	if (stk.empty())
		return true;
	else
		return false;
}