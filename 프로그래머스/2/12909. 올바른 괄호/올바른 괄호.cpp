#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> st;
    for(int i =0; i<s.size(); i++){
        if(s[i] == '('){
            st.push(s[i]);
            continue;
        }
        else {
            if(st.empty()){
                answer = false;
                break;
            }
            if(st.top() == '('){
                st.pop();
                continue;
            }
            if(st.top() == ')'){
                answer = false;
                break;
            }
        }        
    }
    if(!st.empty()) answer = false;
    return answer;
}