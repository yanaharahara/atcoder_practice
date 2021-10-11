#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)
using ll = long long;

int main(){
    int n ;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    ll x;
    cin >> x;
    ll s = 0;
    rep(i,n) s += a[i];
    ll p = x/s;

    ll ans = p*n;
    ll now = p*s;
    //cout << p << endl;
    //cout << ans << endl;
    //cout << now << endl;
    rep(i,n){
        now += a[i];
        ans++;
        if(now > x)break;
    }
    cout << ans << endl;
    return 0;

}