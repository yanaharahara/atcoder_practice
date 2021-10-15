#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<int>> a(h,vector<int>(w)); 
    rep(i,h)rep(u,w) cin >> a[i][u];
    int mn = 999999;
    rep(i,h)rep(j,w) mn = min(mn,a[i][j]);
    int ans = 0;
    rep(i,h)rep(j,w) ans += a[i][j]-mn;
    cout << ans << endl;


        
    

}