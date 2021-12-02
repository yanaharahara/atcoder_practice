#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    int n,x;
    cin >> n >> x;
    vector<int> A(n);
    vector<bool> B(n);
    rep(i,n){
        cin >> A[i];
        B[i] = false;
    }

    int ans = 0;
    while(!B[x-1]){
        B[x-1] = true;
        x = A[x-1];
        ++ans;
    }
    cout << ans << endl;
}























/*
int main(){
    int n,x;
    cin >> n >> x;
    x--;
    vector<int> A(n);
    rep(i,n){
        cin >> A[i],A[i]--;
        
        
    }
    vector<bool> B(n);
    
    int ans = 0;

    while(!B[x]){
        
        B[x] = true;
        x = A[x];
        ++ans;
    }
    
    
    cout << ans << endl;
    return 0;

}
*/