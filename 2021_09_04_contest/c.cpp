#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
int main(){
    int N;
    cin >> N;
    vector<int> p(N);
    vector<int> q(N);
    
    for(int i=0;i<N;i++){
        cin >> p.at(i);
    }
    for(int i=0;i<N;i++){
        q[p[i]-1] = i+1;
        //cout << p[i] << endl;
        
    }
    for(int i=0;i<N;i++){
        cout << q[i] << " ";
        
    }
    /*
    rep(i,N) q[p[i]] = i;
    rep(i, N) cout << q[i] + 1 << " \n"[i == N - 1];
    */


}