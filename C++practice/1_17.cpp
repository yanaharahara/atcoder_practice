#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S;
  cin >> N >> S;
  vector<int> A(N), P(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }

  // リンゴ・パイナップルをそれぞれ1つずつ購入するとき合計S円になるような買い方が何通りあるか
  // ここにプログラムを追記
  int cnt=0;
  for(int u=0;u<N;u++){
      for(int j=0;j<N;j++){
          if(A.at(u)+P.at(j)==S){
              cnt++;
          }
      }
  }

  cout << cnt << endl;
}
