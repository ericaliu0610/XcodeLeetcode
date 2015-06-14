//
//  Solution.cpp
//  042_Trapping_Rain_Water
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/16171/sharing-my-simple-c-code-o-n-time-o-1-space

#include "Solution.h"

int Solution::trap(vector<int> &height)
{
	int n = height.size();
	int left=0; int right=n-1;
	int res=0;
	int maxleft=0, maxright=0;
	while(left<=right){
		if(height[left]<=height[right]){
			if(height[left]>=maxleft) maxleft=height[left];
			else res+=maxleft-height[left];
			left++;
		}
		else{
			if(height[right]>=maxright) maxright= height[right];
			else res+=maxright-height[right];
			right--;
		}
	}
	return res;
}
