#include <iostream>

using namespace std;

int main(){
    int n, n0 = 0, n1 = 0;
    string s;
    std::cin >> n >> s;
    for (int i = 0; i < n; i++){
        if (s[i] == '0') n0++;
        if (s[i] == '1') n1++;
    } 
    std::cout << n - 2 * std::min(n0,n1);
    return 0;
}