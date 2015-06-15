//
//  Solution.cpp
//  057_Insert_Interval
//
//  Created by Chao Li on 6/14/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

vector<Interval> insert(vector<Interval>& intervals, Interval newInterval)
{
	vector<Interval> ret;
	auto it = intervals.begin();
	for(; it!=intervals.end(); ++it){
		if(newInterval.end < (*it).start) //all intervals after will not overlap with the newInterval
			break;
		else if(newInterval.start > (*it).end) //*it will not overlap with the newInterval
			ret.push_back(*it);
		else{ //update newInterval bacause *it overlap with the newInterval
			newInterval.start = min(newInterval.start, (*it).start);
			newInterval.end = max(newInterval.end, (*it).end);
		}
	}
	// don't forget the rest of the intervals and the newInterval
	ret.push_back(newInterval);
	for(; it!=intervals.end(); ++it)
		ret.push_back(*it);
	return ret;
}
