#include <bits/stdc++.h>
using namespace std;

int main(){
    int v,t,s,d;
    cin >> v >> t >> s >> d;
    int i = v*t;
    int u = v*s;
    if(d<i || u<d){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}