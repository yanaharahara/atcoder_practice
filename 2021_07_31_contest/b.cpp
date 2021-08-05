#include <bits/stdc++.h>
using namespace std;

int main(){
    int X;
    cin >> X;
    int X1,X2,X3,X4;
    X1 = X / 1000;
    X2 = (X - (X1 * 1000)) / 100;
    X3 = (X - (X1 * 1000) - (X2 * 100)) / 10;
    X4 = X - (X1 * 1000) - (X2 * 100) - (X3 * 10);
    vector<int> x(4);
    x.at(0) = X1;
    x.at(1) = X2;
    x.at(2) = X3;
    x.at(3) = X4;

    if(X1 == X2 && X2 == X3 && X3 ==X4){
        cout << "Weak" << endl;
        return 0;
    }
    
    //vector<int> X(4);
    for(int i=0;i<x.size();i++){
        if(i < 3){
            if(x.at(i+1) == (x.at(i)+1) || ((x.at(i)==9) && (x.at(i+1)==0))){
            cout << "Weak" << endl;
            return 0;
            }

        }
        


    }
    cout << "Strong" << endl;
    return 0;


}