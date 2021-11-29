#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    int n;
    cin >> n;
    set<int> st;
    for(int a = 1;a <= 200; a++){
        for(int b = 1;b <= 200; b++){
            int s = a*3+a*b*4+b*3;
            st.insert(s);

        }
    }
    
    int ans = 0;
    rep(i,n){
        int s;
        cin >> s;
        if(st.count(s) == 0) ans++;
    }
    cout << ans << endl;
    return 0;
    
}