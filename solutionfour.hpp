#ifndef SOLUTION_FOUR_HPP
#define SOLUTION_FOUR_HPP

#include <vector>
#include <stack>
#include <string>
#include <unordered_map>
#include <iostream>
#include <cctype>

class SolutionFour{
private:
	std::vector<int> records;
	int start;
public:
	SolutionFour(): start(0){}
	int ping(int t){
		records.push_back(t);
		while(records[start] < t-3000){
			start++;
		}
		return records.size() - start;
	}
/*
Input
["RecentCounter", "ping", "ping", "ping", "ping"]
[[], [1], [100], [3001], [3002]]
Output
[null, 1, 2, 3, 3]
*/
};

#endif // SOLUTION_FOUR_HPP