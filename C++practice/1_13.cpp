#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> vec(N);
  for(int i=0; i<N;i++){
      cin >> vec.at(i);

  }
  int sum=0;
  for(int j=0;j<vec.size();j++){
      sum+=vec.at(j);
  }
  int ave=sum/vec.size();
  for(int i=0; i<N;i++){
      int result=vec.at(i)-ave;
      if(result<0){
          result*=-1;
      }
      cout << result << endl;

  }
  
}
