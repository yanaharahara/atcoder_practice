#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int N;
    cin >> N;
    double result = std::log2(N);

    result = int(result);
    std::cout << result
              << std::endl;
}

