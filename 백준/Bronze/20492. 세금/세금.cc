#include <iostream>
using namespace std;

int N;

int main(){
    cin >> N;
    cout<<(N/100)*78<<" "<<(N/100)*80 + (((N/100)*20)/100)*78;
    return 0;
}