//
//  main.cpp
//  test
//
//  Created by Chao Li on 5/25/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include <iostream>
#include "../../001_Two_Sum/Solution.h"

int main(int argc, const char * argv[]) {
    Solution sol;
    int a[] = {5, 9, 0, 2, 7, 6, 8};
    vector<int> nums(a, a+7);
    sol.twoSum(nums, 17);
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
