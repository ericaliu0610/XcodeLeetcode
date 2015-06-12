//
//  main.cpp
//  test
//
//  Created by Chao Li on 5/25/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#include "../../019_Remove_Nth_Node_From_End_of_List/Solution.h"

int main(int argc, const char * argv[]) {
    Solution sol;
    int a[] = {5, 9, 0, 2, 7, 6, 8};
    vector<int> nums(a, a+7);
	ListNode prehead(-1);	// The prehead
	prehead.next = new ListNode(nums[0]);
	ListNode* p = prehead.next;
	for_each(nums.begin()+1, nums.end(), [&](int &i){p->next = new ListNode(i); p = p->next;});
	p = prehead.next;
	while (p)
	{
		cout << p->val << " ";
		p = p->next;
	}
	cout << endl;
	
    sol.removeNthFromEnd(prehead.next, 3);
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
