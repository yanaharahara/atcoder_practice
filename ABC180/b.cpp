#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    rep(i,n){
        cin >> x[i];
    }
    {
        ll ans = 0;
        rep(i,n) ans += abs(x[i]);
        cout << ans << endl;
    }

    {
        ll ans = 0;
        rep(i,n) ans += ll(x[i]) * x[i];
        printf("%.10f\n",sqrt(ans));
    }

    {
        int ans = 0;
        rep(i,n) ans = max(ans,abs(x[i]));
        cout << ans << endl;
    }
    return 0;
    

}