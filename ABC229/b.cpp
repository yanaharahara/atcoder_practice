#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    long long int A,B;
    cin >> A >> B;

    long long int hard = 0;
    while(1){
        int a = A % 10;
        A /= 10;
        int b = B % 10;
        B /= 10;
        if(a + b >= 10){
            cout << "Hard" << endl;
            return 0;
        }
        if(A < 10 || B < 10){
            break;
        }

    }
    cout << "Easy" << endl;


}