#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    int n;
    cin >> n;
    set<vector<int>> s;
    rep(i,n){
        int l;
        cin >> l;
        vector<int> a(l);
        rep(j,l) cin >> a[j];
        s.insert(a);

    }
    cout << s.size() << endl;

}