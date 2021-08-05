#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int cnt = 0;
    int day = 0;
    for(;;){
        day +=1;
        cnt +=day;
        if(cnt>=N){
            break;
        }
    }
    cout << day << endl;
}