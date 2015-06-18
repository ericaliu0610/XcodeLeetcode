//
//  Solution.cpp
//  126_Word_Ladder_II
//
//  Created by Chao Li on 6/17/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Solution.h"
vector<vector<string>> Solution::findLadders(string start, string end, unordered_set<string> &dict)
{
	unordered_map<string, vector<vector<string>>> set1, set2, *set_cur, *set_target;
	vector<vector<string>> vec_start(1, vector<string>(1, start)), vec_end(1, vector<string>(1, end));
	//two-end BFS to effectively prune, BFS strategy will get the smaller set to traverse in each iteration
	set1[start] = vec_start;
	set2[end] = vec_end;
	int K = start.size();
	bool isUpdated = true, isFinished = false;
	vector<vector<string>> res;
	for(int depth = 2; isUpdated && !isFinished; ++depth) {
		if(set1.size() > set2.size()) {
			set_cur = &set2;
			set_target = &set1;
		}
		else {
			set_cur = &set1;
			set_target = &set2;
		}
		unordered_map<string, vector<vector<string>>> inter_set;
		isUpdated = false;
		unordered_set<string> deleting;
		for(auto iteri=set_cur->cbegin(), end = set_cur->cend(); iteri!=end; ++iteri) {
			for(int i=0; i<K; ++i) {
				string temp = (*iteri).first;
				char ch = 'a';
				for(int c = 0; c<26; ++c) {
					temp[i] = ch + c;
					if(set_target->find(temp) != set_target->end()) {
						const vector<vector<string>> *new_paths_first = &(*iteri).second;
						const vector<vector<string>> *new_paths_second = &(*set_target)[temp];
						auto iter_in = set_cur->cbegin();
						if(((*iter_in).second)[0][0] != start) {
							new_paths_first = &(*set_target)[temp];
							new_paths_second = &(*iteri).second;
						}
						for_each(new_paths_first->cbegin(), new_paths_first->end(), [&] (const vector<string> &first_path) {
							for_each(new_paths_second->cbegin(), new_paths_second->cend(), [&] (const vector<string> &second_path) {
								vector<string> temp_path = first_path;
								for_each(second_path.crbegin(), second_path.crend(), [&](const string &s) {
									temp_path.push_back(s);
								});
								res.push_back(temp_path);
							});
						});
						isFinished = true;
					}
					else if(dict.find(temp) != dict.end()) {
						vector<vector<string>> new_paths = (*iteri).second;
						for_each(new_paths.begin(), new_paths.end(), [&] (vector<string> &path) {
							path.push_back(temp);
						});
						if(inter_set.find(temp) == inter_set.end())
							inter_set[temp] = new_paths;
						else {
							for_each(new_paths.begin(), new_paths.end(), [&] (vector<string> &path) {
								inter_set[temp].push_back(path);
							});
						}
						deleting.insert(temp);
						isUpdated = true;
					}
				}
			}
		}
		for_each(deleting.begin(), deleting.end(), [&] (const string &s) {
			dict.erase(s);
		});
		*set_cur = inter_set;
	}
	return res;
}