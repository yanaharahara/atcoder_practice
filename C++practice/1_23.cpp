#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<pair<int,int>>p(N);
    for(int i=0;i<N;i++){
        int a,b;
        cin >> a >> b ;
        p.at(i) = make_pair(b,a);
    }

    sort(p.begin(), p.end());

    for(int j=0;j<N;j++){
        int u,k;
        tie(u,k) = p.at(j);
        cout << k << " " << u << endl;
    }




}