#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> s(n);
    rep(i,n){
        rep(j,3){
            int a;
            cin >> a;
            s[i] += a;
            
        }
    }
    
    rep(i,s.size()){
        cout << s[i] << endl;
    }
    
    vector<int> d = s;
    sort(d.rbegin(),d.rend());
    int mx = d[k-1];
    rep(i,n){
        if(s[i]+300 >= mx) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

}