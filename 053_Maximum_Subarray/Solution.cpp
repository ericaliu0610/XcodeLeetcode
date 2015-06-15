//
//  Solution.cpp
//  053_Maximum_Subarray
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

int Solution::maxSubArray(vector<int> &nums)
{
	int n = nums.size();
	int ans=nums[0],i,j,sum=0;
	for(i=0;i<n;i++){
		sum+=nums[i];
		ans=max(sum,ans);
		sum=max(sum,0);
	}
	return ans;
}