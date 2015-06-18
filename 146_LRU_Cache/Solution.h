//
//  Solution.h
//  146_LRU_Cache
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#ifndef ___46_LRU_Cache__Solution__
#define ___46_LRU_Cache__Solution__

#include <stdio.h>
#include <list>
#include <unordered_map>
using namespace std;

class LRUCache
{
	typedef list<int> LI;
	typedef pair<int, LI::iterator> PII;
	typedef unordered_map<int, PII> HIPII;
	void touch(HIPII::iterator it) {
		int key = it->first;
		used.erase(it->second.second);
		used.push_front(key);
		it->second.second = used.begin();
	}
	HIPII cache;
	LI used;
	int _capacity;
public:
	LRUCache(int capacity);
	int get(int key);
	void set(int key, int value);
};

#endif /* defined(___46_LRU_Cache__Solution__) */
