#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> P(26);
    for(int i=0;i<26;i++){
        cin >> P.at(i);
    }
    for(int u=0;u<26;u++){
        char j = P.at(u) + 96; 
        cout << j;
    }


    return 0;

}