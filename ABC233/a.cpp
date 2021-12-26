#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    int x,y;
    cin >> x >> y;
    if(x >= y){
        cout << 0 << endl;
        return 0;
    }    
    int cnt = 0;
    while(x < y){
        x += 10;
        cnt += 1;

    }
    cout << cnt << endl;
    return 0;

}