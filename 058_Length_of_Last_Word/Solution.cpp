//
//  Solution.cpp
//  058_Length_of_Last_Word
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

int Solution::lengthOfLastWord(string s)
{
	int len = 0;
	string::iterator iter = s.begin();
	while (iter != s.end()) {
		if (*iter++ != ' ')
			++len;
		else if (*iter && *iter != ' ')
			len = 0;
		
	}
	return len;
}