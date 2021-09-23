#include<bits/stdc++.h>
using namespace std;

signed main(){
    string s;
    cin>>s;

    int n=s.size();//sの長さをnとする
    int y=s[n-1]-'0';
    //cout << s[n-1] << endl;
    //cout << n << endl;
    //cout << y << endl;

    s=s.substr(0,n-2);
    //sの0文字目から、(n-2)文字連続で取得する。つまり、末尾2文字を削除する。
    //cout << s << endl;
    if(y<=2){
        s+='-';
    }else if(y>=7){
        s+='+';
    }

    cout<<s<<endl;

    return 0;
}
