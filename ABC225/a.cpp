#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    string s;
    cin >> s;
    if(s[0] == s[1] && s[1] == s[2]) cout << 1 << endl;
    else if(s[0] == s[1] || s[1] == s[2] || s[0] == s[2]) cout << 3 << endl;
    else cout << 6 << endl;
    return 0;
}