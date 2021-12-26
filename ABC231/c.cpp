#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    long long int n,q;
    cin >> n >> q;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    rep(qi,q){
        int x;
        cin >> x;
        int i = lower_bound(a.begin(),a.end(),x)-a.begin();
        cout << i << endl;
        int ans = n - i;
        cout << ans << endl;
    }
    

}