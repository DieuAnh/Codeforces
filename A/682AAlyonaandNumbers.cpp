#include <iostream>

using namespace std;

int main(){
    long long int n, m, cnt = 0;
    std::cin >> n >> m;
    for (int i = 1; i <= n; i++){
        cnt += (i + m) / 5 - i / 5;
    }
    std::cout << cnt;
    return 0;
}