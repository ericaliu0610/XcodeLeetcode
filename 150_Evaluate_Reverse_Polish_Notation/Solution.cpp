//
//  Solution.cpp
//  150_Evaluate_Reverse_Polish_Notation
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

int Solution::evalRPN(vector<string> &tokens)
{
	int l;
	return eval_expression(tokens, tokens.size()-1, l);
}

int Solution::eval_expression(vector<string> &tokens, int r, int &l)
{
	string s = tokens[r];
	
	if(s == "+" || s == "-" || s == "*" || s== "/") // tokens[r] is an operator
	{
		int v2 = eval_expression(tokens, r-1, l);
		int v1 = eval_expression(tokens, l,   l);
		if(s == "+")
			return v1 + v2;
		else if(s == "-")
			return v1 - v2;
		else if(s == "*")
			return v1 * v2;
		else
			return v1 / v2;
	}
	else // tokens[r] is a number
	{
		l = r-1;
		return atoi(s.c_str());
	}
}