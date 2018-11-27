#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, x, c = 0;
    std::cin >> n;
    std::vector<int> a;
    for (int i = 0; i < n; i++){
        std::cin >> x;
        a.push_back(x);
    }
    std::sort(a.begin(), a.end());
    for (int j = 0; j < n; j++){
        if (a[j] == a[0] || a[j] == a[n-1])
            c++;
    }
    std::cout << a.size() - c;
    return 0;
}