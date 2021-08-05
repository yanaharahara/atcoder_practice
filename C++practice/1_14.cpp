#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B, C;
  cin >> A >> B >> C;

  vector<int> vec(3);
  vec={A,B,C};
  sort(vec.begin(),vec.end());
  int result = vec.at(2) - vec.at(0);
  cout << result << endl;

}