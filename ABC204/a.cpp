#include <bits/stdc++.h>
using namespace std;

int main(){
    char x,y;
    cin >> x >> y;
    if(x==y)cout << x << endl;
    else if(x=='0' && y=='1')cout << '2' << endl;
    else if(x=='0' && y=='2')cout << '1' << endl;
    else if(x=='1' && y=='0')cout << '2' << endl;
    else if(x=='1' && y=='2')cout << '0' << endl;
    else if(x=='2' && y=='0')cout << '1' << endl;
    else if(x=='2' && y=='1')cout << '0' << endl;
}