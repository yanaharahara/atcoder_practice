#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    int n,k,a;
    cin >> n >> k >> a;
    int current = a; 
    //cout << current << endl;
    while(1){
        if(k - 1 <= 0){
            break;
        }
        else{
            k -= 1;
            current += 1;
            if(current > n){
                current = 1;
            }
        }
        //cout << current << endl;

    }
    cout << current << endl;
}