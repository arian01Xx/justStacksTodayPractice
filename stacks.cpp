#include "solutionone.hpp"
#include "solutiontwo.hpp"
#include "solutionthree.hpp"
#include "solutionfour.hpp"
#include "solutionfive.hpp"

int main(){

	SolutionOne solutionOne;
	std::string input1="leet**cod*e";
	std::cout<<solutionOne.removeStart(input1)<<std::endl;

	SolutionTwo solutionTwo;
	std::vector<int> input2={5,10,-5};
	std::vector<int> output2=solutionTwo.asteroidCollision(input2);
	for(int i=0; i<output2.size(); i++){ std::cout<<output2[i]<<std::endl;}

	SolutionThree solutionThree;
	std::string input3="3[a]2[bc]";
	std::cout<<solutionThree.decodeString(input3)<<std::endl;

	SolutionFour solutionFour;
	std::cout<<solutionFour.ping(1)<<std::endl;
	std::cout<<solutionFour.ping(100)<<std::endl;
	std::cout<<solutionFour.ping(3001)<<std::endl;
	std::cout<<solutionFour.ping(3002)<<std::endl;

	SolutionFive solutionFive;
	std::string input5="RD";
	std::cout<<solutionFive.predictPartyVictory(input5)<<std::endl;

	return 0;
}