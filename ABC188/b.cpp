#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    rep(i,n){
        cin >> a[i];
    }
    rep(i,n){
        cin >> b[i];
    }
    long long int ans=0;
    rep(i,n){
        ans = ans + (a[i]*b[i]);
    }

    if(ans == 0)cout << "Yes" << endl;
    else cout << "No" << endl;
}