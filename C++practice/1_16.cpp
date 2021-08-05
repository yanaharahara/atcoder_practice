#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  int cnt=0;
  for(int u=0;u<4;u++){
        if(data.at(u)==data.at(u+1)){
            break;
        }
      
        cnt++;
  }
  //cout << cnt << endl;
  if(cnt!=4)cout << "YES" << endl;
  else cout << "NO" << endl;
 
  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  // ここにプログラムを追記
}