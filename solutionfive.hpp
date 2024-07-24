#ifndef SOLUTION_FIVE_HPP
#define SOLUTION_FIVE_HPP

#include <vector>
#include <stack>
#include <string>
#include <unordered_map>
#include <iostream>
#include <cctype>
#include <queue>

class SolutionFive{
public:
	std::string predictPartyVictory(std::string senate){
		std::queue<int> dire;
		std::queue<int> radiant;
		int n=senate.size();

		for(int i=0; i<n; i++){
			if(senate[i]=='D'){
				dire.push(senate[i]);
			}else{
				radiant.push(senate[i]);
			}
		}
		while(!dire.empty() && !radiant.empty()){
			int r_index=radiant.front();
			int d_index=dire.front();
			radiant.pop();
			dire.pop();
			if(r_index < d_index){
				radiant.push(r_index+n);
			}else{
				dire.push(d_index+n);
			}
		}
		return radiant.empty() ? "Dire" : "Radiant";

	}
/*
Input: senate = "RD"
Output: "Radiant"
*/
};

#endif // SOLUTION_FIVE_HPP