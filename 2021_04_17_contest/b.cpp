#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
  int n,m;
  cin >> n >> m;
  vector<int> a(n),b(m);
  rep(i,n){
    cin >> a[i];
  }
  rep(i,m){
    cin >> b[i];
  }
  vector<int> c;
  set_symmetric_difference(a.begin(),a.end(),b.begin(),b.end(),back_inserter(c));
  for(int i:c){
    cout << i << ' ';
  }
  cout << endl;

  
}