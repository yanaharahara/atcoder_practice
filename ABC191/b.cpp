#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,X;
    cin >> N >> X ;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A.at(i) ;
    }

    vector<int> ans;
    for(int u=0;u<N;u++){
        if(A.at(u)!=X){
            int k= A.at(u);
            ans.push_back(k);
        }
    }
    for(int j=0;j<ans.size();j++){
        cout << ans.at(j) << " ";
    }

    cout << endl;
    
}