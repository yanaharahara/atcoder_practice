#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i=1;i<=n;++i){
        bool ok = true;
        for(int base:{8,10}){
            int x = i;
            while(x > 0){
                if(x%base == 7) ok = false;
                x /= base;

            }
        }
        if(ok) ++ans;

    }

    cout << ans << endl;
    

}

/*
int main(){
    int n;
    cin >> n;
    int ans = 0;
    rep(i,n){
        if((i == 7 || i % 7 == 7 )){
            continue;

        }
        else{
            string s = "";
            while(1){
                if(i / 8 == 0){
                    string u = to_string(i % 8);
                    s += u;
                    break;
                }    
                else{
                    int j = i % 8;
                    string k = to_string(j);
                    s += k;
                    i = i / 8;

                }
                

            }
            sort(s.begin(),s.end());
            if((i == 7 || i % 7 == 7 )){
                continue;
            }


        }
        ans += 1;

    }

    cout << ans << endl;
    

}
*/