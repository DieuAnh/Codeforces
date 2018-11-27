#include <iostream>

using namespace std;

int main(){
    int n;
    std::cin >> n;
    int a[n];
    int p[n];
    for (int i = 1; i <= n; i++){
        std::cin >> a[i];
        p[a[i]] = i;
    }
    for (int j = 1; j <= n; j++){
        std::cout << p[j] << ' ';
    }
    return 0;
}