//
//  Solution.cpp
//  108_Convert_Sorted_Array_to_Binary_Search_Tree
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

TreeNode* Solution::sortedArrayToBST(vector<int> &nums)
{
	if(nums.size() == 0) return NULL;
	if(nums.size() == 1)
	{
		return new TreeNode(nums[0]);
	}
	
	int middle = nums.size()/2;
	TreeNode* root = new TreeNode(nums[middle]);
	
	vector<int> leftInts(nums.begin(), nums.begin()+middle);
	vector<int> rightInts(nums.begin()+middle+1, nums.end());
	
	root->left = sortedArrayToBST(leftInts);
	root->right = sortedArrayToBST(rightInts);
	
	return root;
}