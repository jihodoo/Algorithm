#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
    return a>b;
}

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    sort(score.begin(),score.end(),compare);
    int a = score.size()/m;
    for(int i=0; i<score.size(); i += m){
        int min= 9;
        if(score.size()-i < m) break;
        for(int j=i; j<m+i; j++){
            if(score[j] < min) min = score[j];
        }
        answer += min * m;
    }       
    return answer;
}