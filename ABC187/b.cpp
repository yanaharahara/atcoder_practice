#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);

    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i];
    }
    int cnt = 0;
    //cout << cnt << endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            double katamuki
             = (double)(y[j]-y[i])/(x[j]-x[i]);
            if(katamuki >= -1 && katamuki <= 1){
                cnt++;
            } 

        }
    }

    cout << cnt << endl;
}