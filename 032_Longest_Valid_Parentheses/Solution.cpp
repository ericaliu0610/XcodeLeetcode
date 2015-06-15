//
//  Solution.cpp
//  032_Longest_Valid_Parentheses
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/7609/my-o-n-solution-using-a-stack

//Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.
//
//For "(()", the longest valid parentheses substring is "()", which has length = 2.
//
//Another example is ")()())", where the longest valid parentheses substring is "()()", which has length = 4.

#include "Solution.h"

int Solution::longestValidParentheses(string s)
{
	int n = s.length(), longest = 0;
	stack<int> st;
	for (int i = 0; i < n; i++) {
		if (s[i] == '(') st.push(i);
		else
		{
			if (!st.empty())
			{
				if (s[st.top()] == '(') st.pop();
				else st.push(i);
			}
			else st.push(i);
		}
	}
	if (st.empty()) longest = n;
	else
	{
		int a = n, b = 0;
		while (!st.empty())
		{
			b = st.top(); st.pop();
			longest = max(longest, a-b-1);
			a = b;
		}
		longest = max(longest, a);
	}
	return longest;
}