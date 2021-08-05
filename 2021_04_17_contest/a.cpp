#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z;
    cin >> x >> y >> z;
    double y2=y;
    double x2=x;
    double per = y2/x2;
    cout << per << endl;
    int result = per * z - 1 + 0.999999;
    cout << result << endl;
}