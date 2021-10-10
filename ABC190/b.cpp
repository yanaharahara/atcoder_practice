#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,s,d;
    cin >> n >> s >> d;
    vector<int> x(n);
    vector<int> y(n);
    for(int i=0;i<n;i++){
        cin >> x.at(i) >> y.at(i);

    }

    for(int u=0;u<n;u++){
        if(x.at(u) < s && y.at(u) > d){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;

}