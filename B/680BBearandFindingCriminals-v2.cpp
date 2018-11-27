#include <iostream>

using namespace std;

int main(){
    int n, a;
    std::cin >> n >> a;
    int t[n];
    int count = 0;
    for (int i = 0; i < n; i++){
        std::cin >> t[i];
        count += t[i];
    }
    for (int j = 1; j <= a - 1 && j <= n - a ; j++){
        if (t[a-1-j]+ t[a-1+j] == 1)
            count--;
    }
    std::cout << count;
    return 0;
}