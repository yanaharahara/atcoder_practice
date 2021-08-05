#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,D,H;
    cin >> N >> D >> H;
    vector<int> d(N);
    vector<int> h(N);
    

    for(int i=0;i<N;i++){
        cin >> d.at(i) >> h.at(i);

    }
    int high=0;
    for(int u=0;u<N;u++){
         if(h.at(u)>high){
             high = h.at(u);
         }



    }

    cout << high+1 << endl;
    

}