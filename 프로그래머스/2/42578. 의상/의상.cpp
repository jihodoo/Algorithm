#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, int> mp;
    for(vector<string> it: clothes){
        mp[it[1]]++;
    }
    for(auto it: mp){
        it.second++;
        answer *= it.second;
    }
    return answer -1;
}