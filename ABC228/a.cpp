#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    int s,t,x;
    cin >> s >> t >> x;
    if(s <= t){
        if(t == 0){
            if(s <= x){
            cout << "Yes" << endl;
            return 0;
            }

        }
        if(s <= x && x < t){
            cout << "Yes" << endl;
            return 0;
        }
        else{
            cout << "No" << endl;
            return 0;
        }
    }

    else{
        if(s <= x || t > x){
            cout << "Yes" << endl;
            return 0;
        }
        else{
            cout << "No" << endl;
            return 0;
        }
    }

}