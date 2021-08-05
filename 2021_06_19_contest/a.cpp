#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    double i = 1.08 * N;
    if(i < 206){
        cout << "Yay!" << endl;
    }
    else if(206 <= i && i < 207){
        cout << "so-so" << endl;
    }
    else{
        cout << ":(" << endl;
    }
}