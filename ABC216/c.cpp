#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int N;
    cin >> N;
    long long int res = 0;
    string ans = "";
    while(N > 0){
        if(N % 2){
            ans += "A";
            N--;
        }
        else{
            ans += "B";
            N/=2;
        }
        cout << ans << endl;
        cout << N << endl;
    }

    reverse(ans.begin(),ans.end());
    cout << ans << endl;
}
