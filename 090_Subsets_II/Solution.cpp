//
//  Solution.cpp
//  090_Subsets_II
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/14902/c-solution-and-explanation
//
//
//	Given a collection of integers that might contain duplicates, nums, return all possible subsets.
#include "Solution.h"

vector<vector<int>> Solution::subsetsWithDup(vector<int> &nums)
{
	vector<vector<int> > totalset = {{}};
	sort(nums.begin(),nums.end());
	for(int i=0; i<nums.size();){
		int count = 0; // num of elements are the same
		while(count + i<nums.size() && nums[count+i]==nums[i])
			count++;
		int previousN = totalset.size();
		for(int k=0; k<previousN; k++) {
			vector<int> instance = totalset[k];
			for(int j=0; j<count; j++){
				instance.push_back(nums[i]);
				totalset.push_back(instance);
			}
		}
		i += count;
	}
	return totalset;
}