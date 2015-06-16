//
//  Solution.cpp
//  088_Merge_Sorted_Array
//
//  Created by Chao Li on 6/15/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/8233/this-is-my-ac-code-may-help-you

//	Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.


#include "Solution.h"

void Solution::merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
	int i=m-1;
	int j=n-1;
	int k = m+n-1;
	while(i >=0 && j>=0)
	{
		if(nums1[i] > nums2[j])
			nums1[k--] = nums1[i--];
		else
			nums1[k--] = nums2[j--];
	}
	while(j>=0)
		nums1[k--] = nums2[j--];
}
