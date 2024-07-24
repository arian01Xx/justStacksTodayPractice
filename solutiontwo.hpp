#ifndef SOLUTION_TWO_HPP
#define SOLUTION_TWO_HPP

#include <vector>
#include <stack>
#include <string>
#include <unordered_map>
#include <iostream>
#include <cctype>
#include <algorithm>

class SolutionTwo{
public:
	std::vector<int> asteroidCollision(std::vector<int>& asteroids){
		std::vector<int> output;
		std::stack<int> num;

		for(int ast: asteroids){
			bool destroyed=true;
			while(!num.empty() && ast<0 && num.top()>0){
				if(num.top() < -ast){
					num.pop();
					continue;
				}else if(num.top() == -ast){
					num.pop();
				}
				destroyed=true;
				break;
			}
			if(!destroyed){
				num.push(ast);
			}
		}

		while(!num.empty()){
			output.push_back(num.top());
			num.pop();
		}

		std::reverse(output.begin(), output.end());
		return output;
	}
/*
Input: asteroids = [5,10,-5]
Output: [5,10]
Explanation: The 10 and -5 collide resulting in 10. The 5 and 10 never collide.
*/
};

#endif // SOLUTION_TWO_HPP