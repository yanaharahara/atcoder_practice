#include <bits/stdc++.h>
using namespace std;

int main(){
    int P;
    cin >> P;
    int c1 = 1;
    int c2 = 1*2;
    int c3 = 1*2*3;
    int c4 = 1*2*3*4;
    int c5 = 1*2*3*4*5;
    int c6 = 1*2*3*4*5*6;
    int c7 = 1*2*3*4*5*6*7;
    int c8 = 1*2*3*4*5*6*7*8;
    int c9 = 1*2*3*4*5*6*7*8*9;
    int c10 = 1*2*3*4*5*6*7*8*9*10;
    int n10,n9,n8,n7,n6,n5,n4,n3,n2,n1;
    n10 = P / c10;
    P = P % c10;
    n9 = P / c9;
    P = P % c9;
    n8 = P / c8;
    P = P % c8;
    n7 = P / c7;
    P = P % c7;
    n6 = P / c6;
    P = P % c6;
    n5 = P / c5;
    P = P % c5;
    n4 = P / c4;
    P = P % c4;
    n3 = P / c3;
    P = P % c3;
    n2 = P / c2;
    P = P % c2;
    n1 = P / c1;
    P = P % c1;

    int result = n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;
    cout << result << endl;
    


}