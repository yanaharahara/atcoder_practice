#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> S(N);
    vector<int> T(N);
    for(int i=0;i<N;i++){
        cin >> S.at(i) >> T.at(i);
    }
    int first;
    int second;
    int firstflag;
    int secondflag;
    if(T.at(0)>T.at(1)){
        first = T.at(0);
        second = T.at(1);
        firstflag = 0;
        secondflag = 1;

    }
    else{
        first = T.at(1);
        second = T.at(0);
        firstflag = 1;
        secondflag = 0;
    }
    for(int i=2;i<N;i++){
        if(T.at(i) > first){
            second = first;
            first = T.at(i);
            secondflag = firstflag;
            firstflag = i;

        }
        else if(T.at(i) > second){
            second = T.at(i);
            secondflag = i;

        }
    }
    cout << S.at(secondflag) << endl;
    

}
