//
//  Solution.cpp
//  125_Valid_Palindrome
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

bool Solution::isPalindrome(string s)
{
	for (int i = 0, j = s.size() - 1; i < j; i++, j--) { // Move 2 pointers from each end until they collide
		while (isalnum(s[i]) == false && i < j) i++; // Increment left pointer if not alphanumeric
		while (isalnum(s[j]) == false && i < j) j--; // Decrement right pointer if no alphanumeric
		if (toupper(s[i]) != toupper(s[j])) return false; // Exit and return error if not match
	}
	
	return true;
}