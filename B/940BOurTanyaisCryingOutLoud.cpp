#include <iostream>

using namespace std;

int main(){
    long long n, k, a, b;
    int count = 0;
    std::cin >> n >> k >> a >> b;
    while (n > 1){
        if ((n/k * b) < ((n-1) * a) && n/k > 0){
            while (n%k > 0){
                count += a;
                n --;
            }
            n /= k;
            count += b;
        }
        else {
            count += (n-1) * a;
            n = 1;
        }
    }
    std::cout << count;
    return 0;
}