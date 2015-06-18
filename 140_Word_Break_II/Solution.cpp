//
//  Solution.cpp
//  140_Word_Break_II
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

vector<string> Solution::wordBreak(string s, unordered_set<string> &dict)
{
	if(m.count(s)) return m[s]; //take from memory
	vector<string> result;
	if(dict.count(s)){ //a whole string is a word
		result.push_back(s);
	}
	for(int i=1;i<s.size();++i){
		string word=s.substr(i);
		if(dict.count(word)){
			string rem=s.substr(0,i);
			vector<string> prev=combine(word,wordBreak(rem,dict));
			result.insert(result.end(),prev.begin(), prev.end());
		}
	}
	m[s]=result; //memorize
	return result;
}

vector<string> Solution::combine(string word, vector<string> prev)
{
	for(int i=0;i<prev.size();++i){
		prev[i]+=" "+word;
	}
	return prev;
}