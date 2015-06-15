//
//  Solution.cpp
//  065_Valid_Number
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/9013/a-simple-solution-in-cpp

#include "Solution.h"

bool Solution::isNumber(string s)
{
	int i = 0;
	
	// skip the whilespaces
	for(; s[i] == ' '; i++) {}
	
	// check the significand
	if(s[i] == '+' || s[i] == '-') i++; // skip the sign if exist
	
	int n_nm, n_pt;
	for(n_nm=0, n_pt=0; (s[i]<='9' && s[i]>='0') || s[i]=='.'; i++)
		s[i] == '.' ? n_pt++:n_nm++;
	if(n_pt>1 || n_nm<1) // no more than one point, at least one digit
		return false;
	
	// check the exponent if exist
	if(s[i] == 'e') {
		i++;
		if(s[i] == '+' || s[i] == '-') i++; // skip the sign
		
		int n_nm = 0;
		for(; s[i]>='0' && s[i]<='9'; i++, n_nm++) {}
		if(n_nm<1)
			return false;
	}
	
	// skip the trailing whitespaces
	for(; s[i] == ' '; i++) {}
	
	return s[i]==0;  // must reach the ending 0 of the string
}