#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,X;
    cin >> N >> X;
    vector<int> A(N);
    int sum = 0;
    for(int i=0;i<N;i++){
        cin >> A.at(i);
        if((i%2) != 0){
            sum += A.at(i)-1;

        }
        else{
            sum += A.at(i);
        }
         
    }
    if(X>=sum){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }


}