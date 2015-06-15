//
//  Solution.cpp
//  049_Anagrams
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/18664/sharing-my-very-concise-solution-with-explanation

#include "Solution.h"

vector<string> Solution::anagrams(vector<string> &strs)
{
	vector<string> result;
	vector<string> sortedStrs = strs;
	unordered_map<string, vector<int>> map;
	for(int i = 0; i < strs.size(); i++){
		sort(sortedStrs[i].begin(), sortedStrs[i].end());
		map[sortedStrs[i]].push_back(i);
	}
	for(auto it = map.begin(); it != map.end(); it++){
		if(it->second.size() > 1){
			for(int i = 0; i < it->second.size(); i++){
				result.push_back(strs[it->second[i]]);
			}
		}
	}
	return result;
}