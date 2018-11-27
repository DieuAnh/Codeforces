#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, p, q;
    std::cin >> n >> p;
    int a;
    std::vector<int> v;
    for (int i = 0; i < p; i++){
        std::cin >> a;
        v.push_back(a);
    }
    std::cin >> q;
    for (int j = 0; j < q; j++){
        std::cin >> a;
        v.push_back(a);
    }
    for (int k = 1; k <= n; k++){
        if (std::find(v.begin(),v.end(),k) == v.end()){
            std::cout << "Oh, my keyboard!";
            return 0;
        }
    }
    std::cout << "I become the guy.";
    return 0;
}