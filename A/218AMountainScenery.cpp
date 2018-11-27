#include <iostream>

using namespace std;

int main(){
    int n, k;
    std::cin >> n >> k;
    int a[2*n+1];
    for (int i = 0; i < 2 * n + 1; i++){
        std::cin >> a[i];
    }
    for (int j = 0; j < k; j++){
        if ((a[2*j+1] - 1 > a[2*j]) && (a[2*j+1] - 1 > a[2*j+2])){
            a[2*j+1] -= 1;
        }
        else k++;
    }
    for (int m = 0; m < 2 * n + 1; m++){
        std::cout << a[m] << ' ';
    }
    return 0;
}