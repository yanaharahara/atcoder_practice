#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    int cnt=0;
    for(int i=0;i<S.size();i++){
        if(S[i]=='Z' && S[i+1]=='O' && S[i+2]=='N' && S[i+3]=='e'){
            cnt+=1;
        }
    }
    cout << cnt << endl;
}