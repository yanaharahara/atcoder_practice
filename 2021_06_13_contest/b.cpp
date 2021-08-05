#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A.at(i);
        
    }
    vector<int> B(N);
    for(int j=0;j<N;j++){
        B.at(j) = j + 1;
        
    }
    sort(A.begin(),A.end());
    int cnt = 0;
    for(int u=0;u<N;u++){
        if(A.at(u) != B.at(u)){
            cout << "No" << endl;
            break;
        }
        else{
            cnt++;
        }
    }
    if(cnt == N){
        cout << "Yes" << endl;
    }
}