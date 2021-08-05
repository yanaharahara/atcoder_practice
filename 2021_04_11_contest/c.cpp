#include <bits/stdc++.h>
using namespace std;

int main(){
    double r,x,y;
    cin >> r;
    cin >> x;
    cin >> y;

    double i = sqrt(x*x+y*y);
    int ans = ceil(i/r);
    if(ans==1 && i !=r)ans++;
    cout << ans <<endl;
    /*
    double r,x,y;
    cin >> r;
    cin >> x;
    cin >> y;
    double i = sqrt( x*x+y*y);
    if(i==0){
        cout << 0 << endl;
    }
    else if(i==r){
        cout << 1 << endl;
    }
    
    else if(i<=r){
        cout << 1 << endl;
    }
    int cnt=0;
    /*
    if(i>r){
        while(i>r){
            i-=r;
            cnt++;

        }
        cnt++;
        cout << cnt << endl;
    
    }
    
   if(i>r){
       cnt=ceil(i/r);
       if(cnt==1 && i!=r)cnt++;
       cout << cnt << endl;
   }
   */
    
}
