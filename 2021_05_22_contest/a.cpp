#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c ;
    int ansa,ansb,ansc;
    ansa = 7 - a;
    ansb = 7 - b;
    ansc = 7 - c;
    int result = ansa + ansb + ansc;
    cout << result << endl;
}