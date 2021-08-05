#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N ;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A.at(i);
    }
    int cnt = 0;
    for(int u=0;u<N;u++){
        if(A.at(u) > 10){
            int k = A.at(u) - 10;
            cnt += k;
        }
    }

    cout << cnt << endl;
}