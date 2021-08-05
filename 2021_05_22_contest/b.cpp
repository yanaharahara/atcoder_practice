#include <bits/stdc++.h>
using namespace std;
int main(){
    string S1;
    //string S2;
    cin >> S1;
    for(int i=0;i<S1.size();i++){
        if(S1.at(i)=='6'){
            S1.at(i)='9';
        }
        else if(S1.at(i)=='9'){
            S1.at(i)='6';
        }
    }
    reverse(S1.begin(),S1.end());

    cout << S1 << endl;

}