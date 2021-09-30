#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int A,B,C,D;
    cin >> A >> B >> C >> D;
    /*
    if(B>C){
        cout << -1 << endl;
        return 0;
    }
    */

    long long int blue = A;
    long long int red = 0;
    long long int cnt = 0;
    if(blue <= red*D){
        cout << cnt << endl;
        return 0;
    }
    long long u = pow(10.0,5.0);
    for(int i=1;i<=u;i++){
        blue += B;
        red += C;
        cnt += 1;
        if(blue <= red*D){
            cout << cnt << endl;
            
            return 0;

        }

    }
    cout << -1 << endl;
    return 0;


    
}