#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int A,B,C;
    cin >> A >> B >> C;
    if(C % 2 != 0){
        if(B > A){
        cout << '<' << endl;
        }
        else if(A > B){
        cout << '>' << endl;
        }
        else{
        cout << '=' << endl;
        }
    }
    A = abs(A);
    B = abs(B);
    if(C % 2 == 0){
        if(B > A){
        cout << '<' << endl;
        }
        else if(A > B){
        cout << '>' << endl;
        }
        else{
        cout << '=' << endl;
        }
    }
    
    
}
