#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findSection(const int iter, std::vector<int> v){
    int count = 1;
    int n = v.size();
    for (int i = iter; i > 0; i--){
        if (v[i] >= v[i - 1]) count++;
        else break;
    }
    for (int j = iter; j < n - 1; j++){
        if (v[j] >= v[j+1]) count++;
        else break;
    }
    return count;
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