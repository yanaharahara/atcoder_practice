#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin >> n;
    if(n==string(n.rbegin(), n.rend())){
        cout << "Yes" << endl;
        return 0;
    }
    int i = atoi(n.c_str());
    while(i%10==0){
        i/=10;

    }
    int reverse=0;
    int k;
    int u = i;
    while(u!=0){
        k = u%10;
        reverse =reverse*10+k;
        u/=10;
    }
    if(reverse==i){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }


    

}

