#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long int n, f = 0;
    std::cin >> n;
    // for (int i = 1; i <= n; i++){
    //     f = f + std::pow(-1,i) * i;
    // }
    // std::cout << f;
    // return 0;
    if (n % 2 == 1)
        f = -1 * (n / 2 + 1);
    else
        f = n / 2;
    std::cout << f;
    return 0;
}