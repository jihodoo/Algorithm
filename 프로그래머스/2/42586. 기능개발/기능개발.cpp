#include <string>
#include <vector>
#include <queue>
using namespace std;
queue<int> q;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    for(int i = 0; i<progresses.size(); i++){
        int tmp = (100-progresses[i]) / speeds[i];
        if((100-progresses[i]) % speeds[i] != 0) tmp++;
        q.push(tmp);
    }
    // 7 3 9
    int m; // max값
    while(!q.empty()){
        m = q.front();
        int cnt = 0;
        while(true){
            if(q.front()>m || q.empty()) break;
            q.pop();
            cnt++;
        }
        answer.push_back(cnt);
    }
    
    return answer;
}