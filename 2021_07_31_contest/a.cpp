#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B;
    cin >> A >> B;
    if((0<A) && (B==0)){
        cout << "Gold" << endl;
    }
    else if((0==A) && (B>0)){
        cout << "Silver" << endl;
    }
    else if((0<A) && (B>0)){
        cout << "Alloy" << endl;
    }
}