#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    cin >> x;
    if(x%100==0){
        cout << 100 << endl;
    }
    else{
        int result;
        result = 100 - (x%100);
        cout << result << endl;
    }
    
}