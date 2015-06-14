//
//  Solution.cpp
//  038_Count_and_Say
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

string Solution::countAndSay(int n)
{
	if (n == 1)
		return string("1");
	string s = to_string(1);
	
	for (int i = 0; i < n-1; i++)
	{
		s = func(s);
	}
	return s;
}

string Solution::func(string &s)
{
	string r;
	r.reserve(50);
	string::iterator p = s.begin();
	if (s.size() == 1)
	{
		r.append("1");
		r.append(to_string(*p-48));
		return r;
	}
	int num = 1;
	char c = *p;
	p++;
	for (; p != s.end(); p++)
	{
		if (c != *p)
		{
			r.append(to_string(num));
			r.append(to_string(c-48));
			c = *p;
			num = 1;
		}
		else
		{
			num++;
		}
	}
	r.append(to_string(num));
	r.append(to_string(c - 48));
	return r;
}
