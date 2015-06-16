//
//  Solution.cpp
//  093_Restore_IP_Addresses
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

vector<string> Solution::restoreIpAddresses(string s)
{
	vector<string> res;
	int len=s.size();
	for(int i=1;i<4&&(i-1)<len-3;i++){
		for(int j=1;j<4&&(j+i-1)<len-2;j++){
			for(int k=1;k<4&&(k+j+i-1)<len-1;k++){
				string s1=s.substr(0,i);
				string s2=s.substr(i,j);
				string s3=s.substr(i+j,k);
				string s4=s.substr(i+j+k,len-i-j-k);
				if(isValid(s1)&&isValid(s2)&&isValid(s3)&&isValid(s4)){
					string solution=s1+"."+s2+"."+s3+"."+s4;
					res.push_back(solution);
				}
			}
		}
	}
	return res;
}

bool Solution::isValid(string s)
{
	if(s.size()>3||s.size()==0||(s.front()=='0'&&s.size()>1)||stoi(s)>255)
		return false;
	return true;
}