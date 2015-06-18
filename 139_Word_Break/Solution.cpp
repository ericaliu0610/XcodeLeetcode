//
//  Solution.cpp
//  139_Word_Break
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

bool Solution::wordBreak(string s, unordered_set<string> &wordDict)
{
	if(wordDict.size()==0) return false;
	
	vector<bool> dp(s.size()+1,false);
	dp[0]=true;
	
	for(int i=1;i<=s.size();i++)
	{
		for(int j=i-1;j>=0;j--)
		{
			if(dp[j])
			{
				string word = s.substr(j,i-j);
				if(wordDict.find(word)!= wordDict.end())
				{
					dp[i]=true;
					break; //next i
				}
			}
		}
	}
	
	return dp[s.size()];
}