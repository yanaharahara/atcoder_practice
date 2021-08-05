#include <bits/stdc++.h>
using namespace std;

int main(){
    "FLIP";
    "IPFL";
    "LPFI";
    int N;
    cin >> N;
    string S;
    cin >> S;
    int Q;
    cin >> Q;
    vector<int> T(Q);
    vector<int> A(Q);
    vector<int> B(Q);
    
    for(int i=0;i<Q;i++){
        cin >> T.at(i) >> A.at(i) >> B.at(i);

    }
    
    for(int u=0;u<Q;u++){
        if(T.at(u)==1){
            string copy = S;
            int j = B.at(u);
            char B = S[j];
            S.replace(A.at(u),1,B);
            

        } 

    }
    

    


}