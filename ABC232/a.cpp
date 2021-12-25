#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    string s;
    cin >> s;
    int ans;
    char i1 = s[0];
    char u1 = s[2];
    int i = i1 - '0';
    int u = u1 - '0';
    //cout << s[0] << " " << s[2] << endl;
    ans = i * u;
    cout << ans << endl;
}