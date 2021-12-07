#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    rep(i,n){
        cin >> A[i];
    }
    sort(A.begin(),A.end());
    int ans = -1;
    int s = -1;
    for(int u = 2;u <= 1000;u++){
        int cnt = 0;
        rep(i,n){
            if(A[i] % u == 0) cnt+=1;

        }
        if(s < cnt){
            s = cnt;
            ans = u;
            

        }
    }

    cout << ans << endl;
}