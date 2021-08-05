#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    //vector<int> d(N);
    //vector<int> h(N);
    
    string T;
    for(int i=0;i<S.length();i++){
        if(S[i]=='R'){
            reverse(T.begin(),T.end());
        }
        else{
            T.push_back(S[i]);
        }

        //cout << T << endl;

        

    }
    for(int u=0;u<T.length();){
        if(T[u]==T[u+1]){
            T.erase(u,2);
            cout << T[u] << T[u+1] << endl;
            cout << T << endl;
            u=0;
        }

        u++;
    }
    cout << T << endl;
}   

