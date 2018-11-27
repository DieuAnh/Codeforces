#include <iostream>

using namespace std;

int main(){
    long long int n, m, a;
    std::cin >> n >> m >> a;
    long long int l, h;
    if (n%a == 0) l = n/a;
    else l = n/a + 1;
    if (m%a == 0) h = m/a;
    else h = m/a + 1;
    std::cout << l * h;
    return 0;
}