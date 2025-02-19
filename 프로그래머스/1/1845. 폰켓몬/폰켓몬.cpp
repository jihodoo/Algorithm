#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int m = nums.size()/2;
    
    map<int,int> mp;
    
    for(int it: nums){
        mp[it]++;
    }
    int cnt = 0;
    for (auto it : mp){
        cnt++;
    }
    if(cnt >= m) answer = m;
    else answer = cnt;
    
    return answer;
}