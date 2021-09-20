#include <bits/stdc++.h>
using namespace std;

int main(){
    string S,T;
    cin >> S >> T;
    int u;
    if(S.size() < T.size()){
        u = S.size();
    }
    else{
        u = T.size();
    }
    for(int i=0;i<u;i++){
        if(S[i] < T[i]){
            cout << "Yes" << endl;
            return 0;
        }
        else if(S[i] > T[i]){
            cout << "No" << endl;
            return 0;
        }

    }
    if(S.size() < T.size()){
        cout << "Yes" << endl;
        return 0;
    }
    else{
        cout << "No" << endl;
        return 0;
    }
}