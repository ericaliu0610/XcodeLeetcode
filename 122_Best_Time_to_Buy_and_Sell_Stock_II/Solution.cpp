//
//  Solution.cpp
//  122_Best_Time_to_Buy_and_Sell_Stock_II
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//
//	https://leetcode.com/discuss/2012/is-this-question-a-joke

#include "Solution.h"

int Solution::maxProfit(vector<int> &prices)
{
	int total = 0;
	for (int i=0; i< int(prices.size())-1; i++) {
		if (prices[i+1]>prices[i])
			total += prices[i+1]-prices[i];
	}
	
	return total;
}