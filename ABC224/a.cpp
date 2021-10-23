#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    string s;
    cin >> s;
    int size = (int)(s.length());
    if(s[size-1] == 't' && s[size-2] == 's' && s[size-3] == 'i'){
        cout << "ist" << endl;
    }
    else{
        cout << "er" << endl;
    }


}