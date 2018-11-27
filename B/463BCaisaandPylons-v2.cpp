#include <iostream>

using namespace std;

int main(){
    int n, h, ans = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::cin >> h;
        if (ans < h) ans = h;
    }
    std::cout << ans;
    return 0;
}