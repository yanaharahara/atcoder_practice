#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,p;
    cin >> n >> p;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a.at(i);
    }
    int cnt = 0;
    for(int u=0;u<n;u++){
        if(a.at(u) < p){
            cnt++;
        }
    }
    cout << cnt << endl;

}