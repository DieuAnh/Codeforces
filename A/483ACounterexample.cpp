#include <iostream>

using namespace std;

int main(){
    long long int l, r;
    std::cin >> l >> r;
    if (r - l < 2){
        std::cout << -1;
        return 0;
    }
    else if (r - l == 2){
        if (l % 2 == 0){
            std::cout << l << ' ' << l + 1 << ' ' << l + 2;
            return 0;
        }
        else {
            std::cout << -1;
            return 0;
        }
    }
    else {
        if (l % 2 == 0){
            std::cout << l << ' '<< l + 1 << ' ' << l + 2;
        }
        else {
            std::cout << l + 1 << ' ' << l + 2 << ' ' << l + 3;
            return 0;
        }
    }
}