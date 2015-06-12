//
//  Solution.cpp
//  004_Median_of_Two_Sorted_Arrays
//
//  Created by Chao Li on 6/11/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	Solution shared at https://leetcode.com/discuss/35275/c-implementation-o-log-m-n-with-vector-int-as-parameters

#include "Solution.h"

double Solution::findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
	size_t size_1 = nums1.size();
	size_t size_2 = nums2.size();
	int k = int((size_1 + size_2) / 2);
	int res1 = Kth(nums1.begin(), size_1, nums2.begin(), size_2, k+1);
	if ((size_1 + size_2) % 2 == 0) {
		int res2 = Kth(nums1.begin(), size_1, nums2.begin(), size_2, k);
		return ( (double) res1 + res2) / 2.0;
	}
	return res1;
}

int Solution::Kth(Iter start1, size_t size_1, Iter start2, size_t size_2, int kth)
{
	if (size_1 > size_2)
		return Kth(start2 , size_2, start1, size_1, kth);
	if (size_1 == 0) return *(start2 + kth - 1);
	if (kth == 1) return min(*start1, *start2);
	
	int index_1 = min(int(size_1), kth / 2);
	int index_2 = kth - index_1;
	if (*(start1 + index_1 - 1) > *(start2 + index_2 - 1))
		return Kth(start1, size_1 ,start2 + index_2, size_2 - index_2, kth - index_2);
	return Kth(start1 + index_1, size_1 - index_1, start2, index_2, kth - index_1);
}