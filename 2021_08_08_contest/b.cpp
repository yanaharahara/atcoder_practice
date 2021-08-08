#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i=0;i<N;i++){
        cin >> a.at(i);
    }
    int worst,worst2;//worst2がブービー賞
    int worst_num,worst2_num;
    if(a.at(0) >= a.at(1)){
        worst = a.at(0);
        worst2 = a.at(1);
        worst_num = 1;
        worst2_num = 2;
    }
    else{
        worst2 = a.at(0);
        worst = a.at(1);
        worst_num = 2;
        worst2_num = 1;
    }
    //cout << worst2 << endl;
    //cout << worst << endl;

    
    for(int u=2;u<N;u++){
        if(a.at(u) > worst){
            worst2 = worst;
            worst = a.at(u);
            worst2_num = worst_num;
            worst_num = u+1;
             
        }
        else if(a.at(u) > worst2){
            worst2 = a.at(u);
            worst2_num = u+1;
        }
    }

    cout << worst2_num << endl;
    
    
}
