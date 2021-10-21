#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    int n,m,t;
    cin >> n >> m >> t;
    vector<int> a(m),b(m);
    rep(i,m){
        cin >> a[i] >> b[i];
    }
    int now = 0;
    int bat = n;
    rep(i,m){
        bat -= a[i] - now;
        if(bat <= 0){
            cout << "No" << endl;
            return 0;
        }    
        now = a[i];

        bat += b[i] - a[i];
        if(bat > n) bat = n;
        now = b[i]; 


    }
    bat -= t - now;
    if(bat <= 0){
        cout << "No" << endl;
        return 0;
    }   
    cout << "Yes" << endl;
    return 0; 
}