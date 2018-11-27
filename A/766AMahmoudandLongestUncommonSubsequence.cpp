#include <iostream>

using namespace std;

int main(){
    std::string a, b;
    std::cin >> a >> b;
    
    if (a.length() > b.length())
        std::cout << a.length();
    else if (a.length() < b.length())
        std::cout << b.length();
    else {
        if (a == b)
            std::cout << -1;
            else std::cout << a.length();
    }
    return 0;
}