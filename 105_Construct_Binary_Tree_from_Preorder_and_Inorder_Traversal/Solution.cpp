//
//  Solution.cpp
//  105_Construct_Binary_Tree_from_Preorder_and_Inorder_Traversal
//
//  Created by Chao Li on 6/16/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

TreeNode *Solution::buildTree(vector<int> &preorder, vector<int> &inorder)
{
	if(preorder.size()==0)
		return NULL;
	
	stack<int> s;
	stack<TreeNode *> st;
	TreeNode *t,*r,*root;
	int i,j,f;
	
	f=i=j=0;
	s.push(preorder[i]);
	
	root = new TreeNode(preorder[i]);
	st.push(root);
	t = root;
	i++;
	
	while(i<preorder.size())
	{
		if(!st.empty() && st.top()->val==inorder[j])
		{
			t = st.top();
			st.pop();
			s.pop();
			f = 1;
			j++;
		}
		else
		{
			if(f==0)
			{
				s.push(preorder[i]);
				t -> left = new TreeNode(preorder[i]);
				t = t -> left;
				st.push(t);
				i++;
			}
			else
			{
				f = 0;
				s.push(preorder[i]);
				t -> right = new TreeNode(preorder[i]);
				t = t -> right;
				st.push(t);
				i++;
			}
		}
	}
	
	return root;
}