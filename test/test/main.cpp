//
//  main.cpp
//  test
//
//  Created by Chao Li on 5/25/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include <string>
#include <iostream>
using namespace std;

int main(void)
{
	string s("asdjklasdjkla");
	for (auto& c : s)
	{
		cout << c;
	}
	cout << endl;
	
	return 0;
}