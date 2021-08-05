#include <bits/stdc++.h>

using namespace std;

int main(){
    string x;
    cin >> x ;
    string result = x.substr(0,x.find('.'));
    cout << result << endl;
}

int main(){
    string x;
    cin >> x;
    string ans;
    for(char c : x){
        if(c=='.')break;

        ans += c;
    }
    cout << ans << endl;
    return 0;
}