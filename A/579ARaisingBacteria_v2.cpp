#include <iostream>

using namespace std;

int main(){
    int x;
    std::cin >> x;
    std::cout << __builtin_popcount(x);
    return 0;
}