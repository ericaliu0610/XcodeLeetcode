//
//  Solution.h
//  150_Evaluate_Reverse_Polish_Notation
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___50_Evaluate_Reverse_Polish_Notation__Solution__
#define ___50_Evaluate_Reverse_Polish_Notation__Solution__

#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Solution
{
public:
	int evalRPN(vector<string> &tokens);
private:
	int eval_expression(vector<string>& tokens, int r, int& l);
};

#endif /* defined(___50_Evaluate_Reverse_Polish_Notation__Solution__) */
