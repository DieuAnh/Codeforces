#include <iostream>

using namespace std;

int main(){
    long long int n;
    std::cin >> n;
    // tinh chat lop 6: cac so co chu so tan cung la 2, 4, 8
    // khi nang len luy thua bac 4*n thi chu so tan cung la 6
    int r = 1;
    if (n == 0){
        std::cout << 1;
        return 0;
    }
    switch (n%4){
        case 0: std::cout << 6;
                break;
        case 1: std::cout << 8;
                break;
        case 2: std::cout << 4;
                break;
        case 3: std::cout << 2;
                break;
    }
    return 0;
}