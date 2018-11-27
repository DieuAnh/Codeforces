#include <iostream>

using namespace std;

int main(){
    int n, m;
    std::cin >> n >> m;
    char s[n * m];
    bool color = false;
    for (int i = 0; i < n * m; i++){
        std::cin >> s[i];
        if (s[i] == 'C' || s[i] == 'M' || s[i] == 'Y')
            color = true;
    }
    if (color) std::cout << "#Color";
        else std::cout << "#Black&White";
    return 0;
}