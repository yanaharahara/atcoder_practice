#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    int n,x;
    cin >> n >> x;
    string s;
    cin >> s;
    rep(i,n){
        if(s[i]=='o'){
            x++;
        }
        else if(s[i]=='x'){
            if(x != 0){
                x--;
            }
        } 
    }
    cout << x << endl;
    
}