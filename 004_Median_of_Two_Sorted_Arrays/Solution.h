//
//  Solution.h
//  004_Median_of_Two_Sorted_Arrays
//
//  Created by Chao Li on 6/11/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/35275/c-implementation-o-log-m-n-with-vector-int-as-parameters

#ifndef ___04_Median_of_Two_Sorted_Arrays__Solution__
#define ___04_Median_of_Two_Sorted_Arrays__Solution__

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
private:
	typedef vector<int>::iterator Iter;
	int Kth(Iter start1, size_t size_1, Iter start2, size_t size_2, int kth);
};

#endif /* defined(___04_Median_of_Two_Sorted_Arrays__Solution__) */
