#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    if(B>C){
        cout << -1 << endl;
        return 0;
    }

    int blue = A;
    int red = 0;
    int cnt = 0;
    if(blue <= red*D){
        cout << cnt << endl;
        return 0;
    }
    for(;;){
        blue += B;
        red += C;
        cnt += 1;
        if(blue <= red*D){
            break;

        }

    }
    cout << cnt << endl;
    return 0;


    
}