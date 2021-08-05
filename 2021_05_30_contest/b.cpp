#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,K;
    cin >> N >> K;
    int ans = 0;
    for(int i=1;i<=N;i++){
        for(int u=1;u<=K;u++){
            ans += i*100 + u;

        }
    }
    cout << ans << endl;
}