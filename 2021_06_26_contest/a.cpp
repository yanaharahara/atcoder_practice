#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C;
    int ans = 0;
    cin >> A >> B >> C;
    if(A >= C && B >= C){
        ans = A + B;
        cout << ans << endl;

    }

    else if(A >= B && C >= B){
        ans = A + C;
        cout << ans << endl;

    }

    else if(B >= A && C >= A){
        ans = B + C;
        cout << ans << endl;

    }

}