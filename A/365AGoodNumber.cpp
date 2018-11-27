#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, k, cnt = 0;
    std::string a;
    std::cin >> n >> k;
    if (k == 0){
        std::cout << 1;
        return 0;
    }
    for (int i = 0; i < n; i++){
        std::vector<char> vec;
        std::cin >> a;
        for (int j = 0; j < a.length(); j++){      
            vec.push_back(a[j]);  
            for (int l = 0; l < vec.size() - 1; l++){
                if (a[j] == vec[l]){
                    vec.pop_back();
                    break;
                }
            } 
        }
        std::sort(vec.begin(), vec.end());
        if (vec.size() == k + 1 && vec[vec.size() - 1] == k + 48) cnt++;
        vec.clear();
    }
    std::cout << cnt;
    return 0;
}