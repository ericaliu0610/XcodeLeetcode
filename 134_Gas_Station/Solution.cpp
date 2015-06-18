//
//  Solution.cpp
//  134_Gas_Station
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

int Solution::canCompleteCircuit(vector<int> &gas, vector<int> &cost)
{
	int start(0),total(0),tank(0);
	//if car fails at 'start', record the next station
	for(int i=0;i<gas.size();i++) if((tank=tank+gas[i]-cost[i])<0) {start=i+1;total+=tank;tank=0;}
	return (total+tank<0)? -1:start;
}