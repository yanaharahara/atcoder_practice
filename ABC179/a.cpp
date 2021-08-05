#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S ;
    int i = S.size()-1;
    if(S.at(i)=='s'){
        cout << S + "es" << endl;
    }
    else{
        cout << S + 's' << endl;
    }
}