#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C;
    cin >> A >> B >> C;
    int cnt = 0;
    while(cnt <= B){
        cnt += C;
        if(A <= cnt && cnt <= B){
            cout << cnt << endl;
            return 0;
        }
    }
    cout << -1 << endl;

}