#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    long long n;
    cin >> n;
    set<long long> s;
    for(long long x=1;(x*x)<=n;++x){
        if(n % x != 0) continue;
        s.insert(x);
        s.insert(n/x);


            
    }
    for(long long x : s){
        cout << x << endl;
    }
    return 0;
}