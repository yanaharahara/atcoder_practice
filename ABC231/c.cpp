#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    long long int n,q;
    cin >> n >> q;
    vector<long long int> a(n);
    vector<long long int> x(q);
    rep(i,n){
        cin >> a[i];
    }
    rep(i,q){
        cin >> x[i];
    }
    long long int ans = 0;
    rep(i,n){
        if(a[i] >= x[i]) ans++;
    }
    cout << ans << endl;

}