#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    vector<int> a(100);
    vector<int> b(100);
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> a.at(i);
    } 
    for(int u=0;u<N;u++){
        cin >> b.at(u);
    }
    int min=1000;
    int max=0;
    int result;
    //aのmaxとbのminを調べて、a[max]>b[min]なら0
    //a[max]<b[min]なら　b[min]-a[max]+1

    for(int j=0;j<N;j++){
        if(a.at(j)>max){
            max = a.at(j);
        }

    }
    for(int k=0;k<N;k++){
        if(b.at(k)<min){
            min = b.at(k);
        }

    }
    //cout << min << max << endl;
    if(max>min){
        cout << 0 << endl;
    }    
    else{
        result = min - max + 1;
        cout << result << endl;
    }
    
    

}