#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> S(N);
    vector<string> T(N);
    for(int u=0;u<N;u++){
        cin >> S.at(u) >> T.at(u);

    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i!=j){
                if(S[i] == S[j]){
                    if(T[i] == T[j]){
                        cout << "Yes" << endl;
                        return 0;
                    }
                }

            }
            
        }
    }
    cout << "No" << endl;
    return 0;


}