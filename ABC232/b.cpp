#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    string s,t;
    cin >> s >> t;
    set<int> st;
    rep(i,s.size()){
        int k = (t[i]-s[i]+26)%26;
        st.insert(k);

    }
    if(st.size() == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
}    