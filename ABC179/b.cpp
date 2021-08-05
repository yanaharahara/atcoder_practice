#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    
    cin >> N;
    vector<int> D1(N);
    vector<int> D2(N);

    for(int i=0;i<N;i++){
        cin >> D1.at(i) >> D2.at(i);
    }
    int cnt=0;
    for(int u=0;u<N;u++){
        if(D1.at(u)==D2.at(u)){
            cnt++;
        }
        else if(D1.at(u)!=D2.at(u)){
            cnt=0;
        }
        if(cnt==3){
            cout << "Yes" << endl;
            return 0;
        }


    }
    cout << "No" << endl;
}