#include <bits/stdc++.h>
using namespace std;

int main() {

  int N,M;
  cin >> N >> M;
  // 100要素の配列で初期化
  vector<int> veca(N);
  vector<int> vecb(M);
  vector<int> data;



  // 100個の入力を受け取る
  for (int u = 0; u < N; u++) {
    cin >> veca.at(u);
    
  }
  
  for (int o = 0; o < M; o++) {
    cin >> vecb.at(o);
    
  }

  /*
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < M; j++) {
        //cout << veca.at(i) << vecb.at(j);
        if(veca.at(i)==vecb.at(j)){
            data.push_back(veca.at(i));

        }

    }
  }
  */

 std::set_symmetric_difference
 (veca.begin(), veca.end(),vecb.begin(), vecb.end(),
    std::inserter(data, data.end()));

  std::sort(data.begin(),data.end());
  for(int l=0;l<data.size();l++){
      cout << data.at(l);
      cout << " ";
  } 
  
  cout << endl;	



}
