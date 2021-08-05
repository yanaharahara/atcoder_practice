#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A.at(i);
    }
    int cnt = 0;
    for(int u=0;u<N;u++){
        int j = 0;
        while(1){
            j+=1;
            if(j==N)break;
            //cout << u << " " << j << endl;
            //cout << A.at(u) << " " << A.at(j) << endl;
            if((u < j) && (A.at(u) != A.at(j))){
                cnt++;
            }

        }
        
        
    }
    cout << cnt << endl;
}
/*
int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A.at(i);
    }
    int cnt = 0;
    for(int u=0;u<N;u++){
        for(int j=0;j<N;j++){
            if((u < j) && (A.at(u) != A.at(j))){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}
*/