#include <vector>
#include <iostream>
#include <queue>
using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    queue<int> q;
    
    for(int num : arr){
        if(q.empty()) q.push(num);
        else{
            if(q.back() != num) q.push(num);
            else continue;
        }
    }
    while(!q.empty()){
        answer.push_back(q.front());
        q.pop();
    }

    return answer;
}