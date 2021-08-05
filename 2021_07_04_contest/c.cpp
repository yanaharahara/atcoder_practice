#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int N,K;
    cin >> N >> K;
    vector<long long int> a(N);
    vector<long long int> b(N);

    for(unsigned long long int i=0;i<N;i++){
        cin >> a.at(i);
        
    }
    while(K >= N){
        for(unsigned long long int u=0;u<N;u++){
            b.at(u) += 1;
            K -= 1; 

        }
    }
    int j=0;
    while(K>0){
        b.at(j)+=1;
        j++;
        K -= 1;
    }

    for(unsigned long long int k=0;k<N;k++){
        cout << b.at(k) << endl;
        
    }
    
}