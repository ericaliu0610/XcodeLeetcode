//
//  Solution.h
//  030_Substring_With_Concatenation_of_All_Words
//
//  Created by Chao Li on 6/12/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/22289/my-ac-c-code-o-n-complexity-26ms

#ifndef ___30_Substring_With_Concatenation_of_All_Words__Solution__
#define ___30_Substring_With_Concatenation_of_All_Words__Solution__

#include <stdio.h>
#include <string>
#include <vector>
#include <random>
using namespace std;

class Solution
{
	// The general idea:
	// Construct a hash function f for L, f: vector<string> -> int,
	// Then use the return value of f to check whether a substring is a concatenation
	// of all words in L.
	// f has two levels, the first level is a hash function f1 for every single word in L.
	// f1 : string -> double
	// So with f1, L is converted into a vector of float numbers
	// Then another hash function f2 is defined to convert a vector of doubles into a single int.
	// Finally f(L) := f2(f1(L))
	// To obtain lower complexity, we require f1 and f2 can be computed through moving window.
	// The following corner case also needs to be considered:
	// f2(f1(["ab", "cd"])) != f2(f1(["ac", "bd"]))
	// There are many possible options for f2 and f1.
	// The following code only shows one possibility (probably not the best),
	// f2 is the function "hash" in the class,
	// f1([a1, a2, ... , an]) := int( decimal_part(log(a1) + log(a2) + ... + log(an)) * 1000000000 )
public:
	double hash(double f, double code[], string& word);
	vector<int> findSubstring(string S, vector<string>& L);
};

#endif /* defined(___30_Substring_With_Concatenation_of_All_Words__Solution__) */
