#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,x,y;
    int ans = 0;
    cin >> n >> a >> x >> y;
    for(int i=1;i<=n;i++){
        if(i >= (a+1)){
            ans += y;

        }
        else{
            ans += x;
        }
        //cout << ans << endl;

    }

    cout << ans << endl;
}