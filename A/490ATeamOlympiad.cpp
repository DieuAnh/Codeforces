#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    std::cin >> n;
    int num;
    std::vector<int> v, v1, v2, v3;
    for (int i = 0; i < n; i++){
        std::cin >> num;
        v.push_back(num);
    }   
    for (int r = 0; r < n; r++){
        if (v[r] == 1){
            v1.push_back(r);
        }
        if (v[r] == 2){
            v2.push_back(r);
        }
        if (v[r] == 3){
            v3.push_back(r);
        }
    }
    int count = std::min(std::min(v1.size(), v2.size()), v3.size());
    
    std::cout << count << std::endl;
    for (int k = 0; k < count; k++){
        std::cout << v1[k] + 1<< ' ' << v2[k] + 1<< ' ' << v3[k] +1<< std::endl;
    }
    return 0;
}