#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, A;
    //string op;
    cin >> N;
    cin >> A;
    int i=N;
    if(N%500==0)cout << "Yes" << endl;
    if(N%500!=0){
        while(N/500>=1){
            N/=500;
        }
        //cout << N << endl;
        if(i-500*N<=A)cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
}