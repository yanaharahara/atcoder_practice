#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int cnt=0;
    cin >> N;
    vector<int> vec(N);
    for(int u=0;u<N;u++){
        cin >> vec.at(u);
        
    }
    
    
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i<j){
                int k = vec.at(i)-vec.at(j);
                if(!(k%200)){
                    cnt++;
                }

            }
        }
    }
    
    

    cout << cnt << endl;
    

}

