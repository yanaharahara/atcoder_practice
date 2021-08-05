#include <bits/stdc++.h>
using namespace std;

int main(){
    int A1,A2,A3,A4;
    cin >> A1 >> A2 >> A3 >> A4;
    int ans1 = min(A1,A2);
    int ans2 = min(A3,A4);
    cout << min(ans1,ans2) << endl ;
}