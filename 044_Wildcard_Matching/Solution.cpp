//
//  Solution.cpp
//  044_Wildcard_Matching
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"


bool Solution::isMatch(string s, string p)
{
	string::iterator iters = s.begin();
	string::iterator iterp = p.begin();
	string::iterator pp = iterp;
	string::iterator ss=iters;
	while (*iters){
		//advancing both pointers when (both characters match) or ('?' found in pattern)
		//note that *iterp will not advance beyond its length
		if ((*iterp=='?')||(*iterp==*iters)){iters++;iterp++;continue;}
		
		// * found in pattern, track index of *, only advancing pattern pointer
		if (*iterp=='*'){pp=iterp++; ss=iters;continue;}
		
		//current characters didn't match, last pattern pointer was *, current pattern pointer is not *
		//only advancing pattern pointer
		if (pp != p.end()){ iterp = pp+1; iters=++ss;continue;}
		
		//current pattern pointer is not pp, last patter pointer was not *
		//characters do not match
		return false;
	}
	
	//check for remaining characters in pattern
	while (*iterp=='*'){iterp++;}
	
	return iterp == p.end() ? true : false;
}