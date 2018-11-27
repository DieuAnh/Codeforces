#include <iostream>

using namespace std;

int main(){
    int n;
    std::cin >> n;
    std::string s, d = "";
    std::cin >> s;
    for (int i = 0; i < n; i++){
        if ((n-i)%2 /*== 1*/){
            d += s[i];
        }
        else d = s[i] + d;
    }
    std::cout << d;
    return 0;
}