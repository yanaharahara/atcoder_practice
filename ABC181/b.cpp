#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)
using ll = long long;
int main(){
    int n;
    cin >> n;
    ll ans = 0;
    rep(i,n){
        ll a,b;
        cin >> a >> b;
        ans += (a+b)*(b-a+1)/2;
    }
    cout << ans << endl;
    return 0;
    
}