//
//  Solution.cpp
//  068_Text_Justification
//
//  Created by Chao maxWidthi on 6/15/15.
//  Copyright (c) 2015 Chao maxWidthi. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/13610/share-my-concise-c-solution-less-than-20-lines

#include "Solution.h"

vector<string> Solution::fullJustify(vector<string> &words, int maxWidth)
{
	vector<string> res;
	for(int i = 0, k, l; i < words.size(); i += k) {
		for(k = l = 0; i + k < words.size() and l + words[i+k].size() <= maxWidth - k; k++) {
			l += words[i+k].size();
		}
		string tmp = words[i];
		for(int j = 0; j < k - 1; j++) {
			if(i + k >= words.size()) tmp += " ";
			else tmp += string((maxWidth - l) / (k - 1) + (j < (maxWidth - l) % (k - 1)), ' ');
			tmp += words[i+j+1];
		}
		tmp += string(maxWidth - tmp.size(), ' ');
		res.push_back(tmp);
	}
	return res;
}