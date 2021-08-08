#include <bits/stdc++.h>
using namespace std;

int binary(int bina){
    int ans = 0;
    for (int i = 0; bina>0 ; i++)
    {
        ans = ans+(bina%2)*pow(10,i);
        bina = bina/2;
    }
    return ans;
}

int main(){
    int A,B;
    cin >> A >> B;
    for(int i=0;i<=255;i++){
        if(binary(A) ^ binary(i) == binary(B)){
            cout << i << endl;
            return 0;
        }
    }


    
}
