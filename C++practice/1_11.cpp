#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  for(int i=0;i<N;i++){
    int u;
    string op;
    cin >> op >> u;
    if (op == "+") {
      A+=u;
      cout << i+1 << ":" << A << endl;
    }
    if (op == "-") {
      A-=u;
      cout << i+1 << ":" << A << endl;
    }
    if (op == "*") {
      A*=u;
      cout << i+1 << ":" << A << endl;
    }
    if (op == "/") {
      if(u==0){
        cout << "error" << endl;
        break;
      }
      A/=u;  
      cout << i+1 << ":" << A << endl;
    }

    //cout << i+1 << ":" << A << endl;

  }

  // ここにプログラムを追記
}
