#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findSection(const int iter, std::vector<int> v){
    int l, r;
    int n = v.size();
    for (int i = iter; i >= 0; i--){
        if (iter == 0){
            l = 0;
            break;
        }
        l = i;
        if (v[i] < v[i-1]) break;
    }
    for (int j = iter; j < n; j++){
        if (iter == n - 1){
            r = n - 1;
            break;
        }
        r = j;
        if (v[j + 1] > v[j]) break;
    }
    //std::cout << "l = " << l << " and r = " << r << " and return " << r - l + 1 << std::endl;
    return r - l + 1;
}
int main(){
    int n;
    std::cin >> n;
    int num;
    std::vector<int> vec;
    for (int i = 0; i < n; i++){
        std::cin >> num;
        vec.push_back(num);
        //std::vector<int> vec(n) ==> compilator error!!!!!
    }
    int max = 0, sec;
    for (int j = 0; j < n; j++){
        sec = findSection(j, vec);
        if (sec > max)  max = sec;
    }
    std::cout << max;
    return 0;
}