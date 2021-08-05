#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(c==0){
        while(1){
            a-=1;
            if(a==0){
                cout << "Aoki" << endl;
                break;
            }
            b-=1;
            if(b==0){
                cout <<"Takahashi" << endl;
                break;
            }
        }
    }
    if(c==1){
        while(1){
            b-=1;
            if(b==0){
                cout << "Takahashi" << endl;
                break;
            }
            a-=1;
            if(a==0){
                cout <<"Aoki" << endl;
                break;
            }
        }
    }
}