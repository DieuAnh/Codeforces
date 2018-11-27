#include <iostream>

using namespace std;

int main(){
    int n, x, x_opposite;
    std::cin >> n >> x;
    int a[n], b[n];
    // std::cin >> a >> b;
    // bool beTower = true;
    // for (int i = 0; i < n - 1; i++){
    //     x_opposite = 7 - x;
    //     std::cin >> a >> b;
    //     if (x_opposite == a || x_opposite == b){
    //         beTower = false;
    //     }
    //     x = x_opposite;
    // }
    // if (beTower) std::cout << "YES";
    // else std::cout << "NO";
    for (int i = 0; i < n; i++){
        std::cin >> a[i] >> b[i];
    }
    for (int j = 0; j < n; j++){
        x_opposite = 7 - x;
        if ((a[j] == x_opposite) || (b[j] == x_opposite) || (a[j] == x) || (b[j] == x)){
            std::cout << "NO";
            return 0;
        }
        x = x_opposite;
    }
    std::cout << "YES";
    return 0;
}