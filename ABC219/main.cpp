#include <bits/stdc++.h>
using namespace std;

int main(){
    int score[5] = {1, 2, 3, 4, 5};
    for(int s : score)
    {
        cout << s << std::endl;
    }

    std::vector<int> count{1, 2, 3, 4, 5};
    for(auto&& x : count) {
        std::cout << x << std::endl;
    }
}