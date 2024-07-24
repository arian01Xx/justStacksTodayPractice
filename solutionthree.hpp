#ifndef SOLUTION_THREE_HPP
#define SOLUTION_THREE_HPP

#include <vector>
#include <stack>
#include <string>
#include <unordered_map>
#include <iostream>
#include <cctype>

class SolutionThree {
public:
    std::string decodeString(std::string s){
        const int m=s.size();
        std::string ans=""; std::string temp=""; int mul=0;
        std::stack<int> num; std::stack<std::string> st;
        for(int i=0; i<m; ++i){
            if(s[i]>='0' && s[i]<='9'){
                mul=mul*10+(s[i]-'0');
            }else if(s[i]=='['){
                st.push(ans);
                num.push(mul);
                mul=0;
                ans="";
            }else if(s[i]==']'){
                temp=ans;
                for(int j=1; j<num.top(); ++j){
                    ans=ans+temp;
                }
                num.pop();
                ans=st.top()+ans;
                st.pop();
            }else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
/*
Input: s = "3[a]2[bc]"
Output: "aaabcbc"
*/
};

#endif // SOLUTION_THREE_HPP