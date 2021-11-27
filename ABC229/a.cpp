#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    if(s1[0] == '#'){
        if(s1[1] == '#' || s2[0] == '#'){
            cout << "Yes" << endl;
        }
        else{
            if(s2[1] == '#'){
                cout << "No" << endl;
            }
        }
    }
    else if(s1[1] == '#'){
        if(s2[1] == '#' || s1[0] == '#'){
            cout << "Yes" << endl;
        }
        else{
            if(s2[0] == '#'){
                cout << "No" << endl;
            }
        }
    }
    
    else if(s2[0] == '#'){
        if(s2[1] == '#' || s1[0] == '#'){
            cout << "Yes" << endl;
        }
        else{
            if(s1[1] == '#'){
                cout << "No" << endl;
            }
        }

    }

    else if(s2[1] == '#'){
        if(s2[0] == '#' || s1[1] == '#'){
            cout << "Yes" << endl;
        }
        else{
            if(s1[0] == '#'){
                cout << "No" << endl;
            }
        }

    }

}