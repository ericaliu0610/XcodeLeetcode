//
//  Solution.cpp
//  146_LRU_Cache
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"

LRUCache::LRUCache(int capacity)
{
}

int LRUCache::get(int key)
{
	auto it = cache.find(key);
	if (it == cache.end()) return -1;
	touch(it);
	return it->second.first;
}

void LRUCache::set(int key, int value)
{
	auto it = cache.find(key);
	if (it != cache.end()) touch(it);
	else {
		if (cache.size() == _capacity) {
			cache.erase(used.back());
			used.pop_back();
		}
		used.push_front(key);
	}
	cache[key] = { value, used.begin() };
}