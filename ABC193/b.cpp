#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N ;
    vector<int> A(N);
    vector<int> P(N);
    vector<int> X(N);
    for(int i=0;i<N;i++){
        cin >> A.at(i) >> P.at(i) >> X.at(i);
        
    }
    vector<int> vec;
    for(int u=0;u<N;u++){
        if(A.at(u) < X.at(u)){
            vec.push_back(P.at(u));
            

        }
    }
    
    bool a = vec.empty();
    if(a == true){
        cout << -1 << endl;
    }
    else{
        int ans=vec.at(0);
        for(int j=1;j<vec.size();j++){
            if(ans > vec.at(j)){
                ans = vec.at(j);
            }
        }
        cout << ans << endl;

    

    }
    
}