#include <bits/stdc++.h>
using namespace std;

int main(){
    string S1,S2,S3;
    string T;
    cin >> S1;
    cin >> S2;
    cin >> S3;
    cin >> T;
    string ans = "";
    for(int i=0;i<T.size();i++){
        if(T.at(i)=='1'){
            ans += S1;
        }
        else if(T.at(i)=='2'){
            ans += S2;
        }
        else{
            ans += S3;
        }

    }
    cout << ans << endl;
    
    return 0;

}