//
//  Solution.cpp
//  087_Scamble_String
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/23930/a-simple-solution-without-dp-in-c

#include "Solution.h"

bool Solution::isScamble(string s1, string s2)
{
	int n = s1.length();
	return judge(s1.c_str(), s2.c_str(), 0, n-1, 0, n-1);
}

bool Solution::judge(const char *s1, const char *s2, int a, int b, int u, int v)
{
	if(b-a!=v-u) return false;
	if(b-a==0 && s1[a]==s2[u]) return true;
	
	int cnt[256]={0};
	for(int i=a;i<=b;++i){
		cnt[s1[i]]++;
	}
	for(int i=u;i<=v;++i){
		cnt[s2[i]]--;
	}
	for(int i=0;i<256;++i){
		if(cnt[i]!=0) return false;
	}
	
	for(int i=a;i<b;++i){
		if(judge(s1,s2,a,i,u,u+i-a) && judge(s1,s2,i+1,b,v-(b-i-1),v)){
			return true;
		}
		if(judge(s1,s2,a,i,v-(i-a),v) && judge(s1,s2,i+1,b,u,u+b-(i+1))){
			return true;
		}
	}
	return false;
}