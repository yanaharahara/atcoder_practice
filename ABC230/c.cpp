#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    int n,w;
    cin >> n >> w;
    vector<pair<int,int>> c(n);
    rep(i,n){
        cin >> c[i].first >> c[i].second;
    }
    sort(c.rbegin(),c.rend());

    long long int ans = 0;
    rep(i,n){
        long long int x = min(w,c[i].second);
        ans += x * c[i].first;
        w -= x;
    }
    cout << ans << endl;
}





/*
int main(){
    int n,w;
    cin >> n >> w;
    vector<pair<int,int>> c(n);
    rep(i,n){
        cin >> c[i].first >> c[i].second;
    }
    sort(c.rbegin(),c.rend());

    long long int ans = 0;
    rep(i,n){
        long long int x = min(w,c[i].second);
        
        cout << w << x << endl;
        ans += x * c[i].first;
        w -= x;
    }

    cout << ans << endl;
    return 0;

}
*/