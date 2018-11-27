#include <iostream>

using namespace std;

int main(){
    long long int n, k, x;
    std::cin >> n >> k;
    if (n % 2 == 0){
        if (k <= n/2){
            x = 2*k - 1;
        }
        else {
            x = 2*(k - n/2);
        }
    }
    else {
        if (k <= n/2 + 1){
            x = 2*k - 1;
        }
        else {
            x = 2*(k - n/2 - 1);
        }
    }
    std::cout << x;
    return 0;
}