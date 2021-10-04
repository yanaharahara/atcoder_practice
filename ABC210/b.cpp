#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin >> n ;
    string s;
    cin >> s;
    for(long long int i=0;i<n;i++){
        if(s[i] == '1' && i%2==0){
            cout << "Takahashi" << endl;
            return 0;
        }
        else if(s[i] == '1' && i%2!=0){
            cout << "Aoki" << endl;
            return 0;
        }

    }




}