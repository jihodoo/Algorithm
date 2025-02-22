#include<string>
#include <iostream>
#include <stack>

using namespace std;
stack<char> st;

bool solution(string s)
{
    bool answer = true;
    for(int i = 0; i<s.size(); i++){
        if(st.empty()){
            if(s[i] == ')') return false;
            else st.push(s[i]);
        }
        else{
            if(s[i] == st.top()) st.push(s[i]);
            else{
                st.pop();
            }
        }
    }
    if(!st.empty()) return false;
    return answer;
}