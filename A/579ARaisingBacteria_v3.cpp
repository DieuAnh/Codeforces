#include <iostream>

using namespace std;

int main(){
    int x;
    std::cin >> x;
    int count = 0;
    while (x > 0){
        count += x%2;
        x = x/2;
    }
    std::cout << count;
    return 0;
}