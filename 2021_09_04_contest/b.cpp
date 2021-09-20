#include <bits/stdc++.h>
using namespace std;

int main(){
    string S1,S2,S3;
    cin >> S1;
    cin >> S2;
    cin >> S3;
    if(S1[1] != 'B' && S2[1] != 'B' && S3[1] != 'B'){
        cout << "ABC" << endl;
    }
    if(S1[1] != 'R' && S2[1] != 'R' && S3[1] != 'R'){
        cout << "ARC" << endl;
    }
    if(S1[1] != 'G' && S2[1] != 'G' && S3[1] != 'G'){
        cout << "AGC" << endl;
    }
    if(S1[1] != 'H' && S2[1] != 'H' && S3[1] != 'H'){
        cout << "AHC" << endl;
    }
    return 0;
    
}