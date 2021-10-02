#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    if(s == t){
        cout << "Yes" << endl;
        return 0;
    }    
    for(int i=0;i<s.size();i++){
        char temp = s[i+1];
        s[i+1] = s[i];
        s[i] = temp;
        if(s == t){
            cout << "Yes" << endl;
            return 0;
        }
        else{
            char temp = s[i+1];
            s[i+1] = s[i];
            s[i] = temp;

        }

    }
    cout << "No" << endl;
}