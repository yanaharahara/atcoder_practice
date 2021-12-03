#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    int n;
    cin >> n;
    if(n <= 41){
        if(n < 10){
            string ans = "AGC00" + to_string(n);
            cout << ans << endl;
        }
        else{
            string ans = "AGC0" + to_string(n);
            cout << ans << endl;

        }
    }
    else{
        string ans = "AGC0" + to_string(n+1);
        cout << ans << endl;

    }
    
}