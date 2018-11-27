#include <iostream>

using namespace std;

int main(){
    int r[2], c[2], d[2];
    std::cin >> r[0] >> r[1];
    std::cin >> c[0] >> c[1];
    std::cin >> d[0] >> d[1];
    int a[4];
    int m = r[0] + c[0] - d[1];
    if (/*(m % 2 != 0) || */(r[0] + r[1] != c[0] + c[1]) || (c[0] + c[1] != d[0] + d[1])){
        std::cout << -1;
        return 0;
    }
    else 
        a[0] = m / 2;
    a[1] = r[0] - a[0];
    a[2] = c[0] - a[0];
    a[3] = d[0] - a[0];
    for (int i = 0; i < 4; i++){
        if ((a[i] < 1) || (a[i] > 9)){
            std::cout << -1;
            return 0;
        }
        for (int j = i + 1; j < 4; j++){
            if (a[i] == a[j]){
                std::cout << -1;
                return 0; 
            }
        }
    }
    std::cout << a[0] << ' ' << a[1] << std::endl;
    std::cout << a[2] << ' ' << a[3] << std::endl;
    return 0;
}