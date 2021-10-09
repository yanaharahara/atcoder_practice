#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin >> n;
    if(n.length()==1){
        n = "000" + n;
        cout << n << endl;
    }
    else if(n.length()==2){
        n = "00" + n;
        cout << n << endl;

    }
    else if(n.length()==3){
        n = "0" + n;
        cout << n << endl;

    }
    else{
        cout << n << endl;
    }


    
}