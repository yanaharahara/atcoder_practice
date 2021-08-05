#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B;
    cin >> A >> B;
    int A3 = A/100;
    int B3 = B/100;
    A = A - (A3*100);
    B = B - (B3*100);
    int A2 = A/10;
    int B2 = B/10;
    A = A - (A2*10);
    B = B - (B2*10);
    int A1 = A;
    int B1 = B;
    int ansA,ansB;
    ansA = A3 + A2 + A1;
    ansB = B3 + B2 + B1;
    if(ansA > ansB){
        cout << ansA << endl;
    }
    else{
        cout << ansB << endl;
    }
    

}