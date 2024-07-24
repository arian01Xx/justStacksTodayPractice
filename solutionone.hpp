#ifndef SOLUTION_ONE_HPP
#define SOLUTION_ONE_HPP

#include <vector>
#include <stack>
#include <string>
#include <unordered_map>
#include <iostream>
#include <cctype>
#include <algorithm>

class SolutionOne{
public:
	std::string removeStart(std::string s){
		std::string output;
		std::stack<char> st;
		for(char c: s){
			if(c=='*'){
				if(!st.empty()){
					st.pop();
				}
			}else{
				st.push(c);
			}
		}
		while(!st.empty()){
			output+=st.top();
			st.pop();
		}
		std::reverse(output.begin(), output.end());

		return output;
	}
/*
Input: s = "leet**cod*e"
Output: "lecoe"
*/
};

#endif // SOLUTION_ONE_HPP