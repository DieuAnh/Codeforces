#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, d, a, b, size = 0;
    std::cin >> n >> d;
    std::vector<int> v, count;
    v.resize(n);
    //count.resize(n);
    for (int i = 0; i < n; i++){
        std::cin >> a;
        v.push_back(a);
    }
    std::sort(v.begin(), v.end());  
    for (int k = 0; k < n; k++){
        for (int l = 1; l < n; l++){
            if (v[l] > v[k]+d){
                size++;
                count.resize(size);
                count[k] ++;
                std::cout << "count is " <<  count[k] << ";";
            }
        }
    }
    std::sort(count.begin(), count.end());
    std::cout << n-count[n-1];
    return 0;
}
