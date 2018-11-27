#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int n, m;
    std::cin >> n >> m;
    int *p;
    p = std::find(a, a + 15, n);
    p++;
    if (m == *p) std::cout << "YES";
    else std::cout << "NO";
    return 0;
}