#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)
using ll = long long;
using P = pair<int,int>;
int main(){
    long long int n,k;
    cin >> n >> k;
    vector<long long int> a(n);
    rep(i,n){
        cin >> a[i];
    }
    vector<ll> ans(n,k/n);
    k %= n;
    vector<P> p(n);
    rep(i,n) p[i] = P(a[i],i);
    sort(p.begin(),p.end());
    rep(i,k) ans[p[i].second]++;

    rep(i,n) cout << ans[i] << endl;



}

/*
int main(){
    unsigned long long int N,K;
    cin >> N >> K;
    vector<long long int> a(N);
    vector<long long int> b(N);

    for(unsigned long long int i=0;i<N;i++){
        cin >> a.at(i);
        
    }
    while(K >= N){
        for(unsigned long long int u=0;u<N;u++){
            b.at(u) += 1;
            K -= 1; 

        }
    }
    int j=0;
    while(K>0){
        b.at(j)+=1;
        j++;
        K -= 1;
    }

    for(unsigned long long int k=0;k<N;k++){
        cout << b.at(k) << endl;
        
    }
    
}
*/