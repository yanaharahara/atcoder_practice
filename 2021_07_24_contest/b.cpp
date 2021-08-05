#include <bits/stdc++.h>
using namespace std;

int main(){
    string S1,S2,S3,S4;
    cin >> S1 >> S2 >> S3 >> S4;
    int i=0;
    int u=0;
    int j=0;
    int k=0;
    if(S1=="H"){
        i+=1;
    }
    else if(S1=="2B"){
        u+=1;
    }
    else if(S1=="3B"){
        j+=1;
    }
    else if(S1=="HR"){
        k+=1;
    }

    if(S2=="H"){
        i+=1;
    }
    else if(S2=="2B"){
        u+=1;
    }
    else if(S2=="3B"){
        j+=1;
    }
    else if(S2=="HR"){
        k+=1;
    }

    if(S3=="H"){
        i+=1;
    }
    else if(S3=="2B"){
        u+=1;
    }
    else if(S3=="3B"){
        j+=1;
    }
    else if(S3=="HR"){
        k+=1;
    }

    if(S4=="H"){
        i+=1;
    }
    else if(S4=="2B"){
        u+=1;
    }
    else if(S4=="3B"){
        j+=1;
    }
    else if(S4=="HR"){
        k+=1;
    }
    
    if(i==u && u==j && j==k){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }




    
    

}