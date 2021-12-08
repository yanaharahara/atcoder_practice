#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    double sx,sy,gx,gy;
    cin >> sx >> sy >> gx >> gy;
    double ans = (gx-sx)*sy/(sy+gy)+sx;
    printf("%.10f\n",ans);

}