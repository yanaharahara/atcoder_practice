#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    int l,r;
    string s;
    cin >> l >> r;
    cin >> s;
    string s_2;
    //reverse(s_2.begin()+l,s_2.end()+r);
    //cout << s_2 << endl;
    for(int i=l-1;i<r;i++){
        s_2 += s[i];
    }
    reverse(s_2.begin(),s_2.end());
    int index = 0;
    for(int i=l-1;i<r;i++){
        s[i] = s_2[index];
        index+=1;

        
    }
    cout << s << endl;
    return 0;
    

    
}