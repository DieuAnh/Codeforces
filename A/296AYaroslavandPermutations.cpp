#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

int main(){
    int n;
    std::cin >> n;
    int arr[n];
    std::map<int,int> map;
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
        map[arr[i]]++;
    }
    //ceil of 10.43 is 11
    int mid = std::ceil(1.0*n/2);
    for (auto it = map.begin(); it != map.end(); it++){
        if (it->second > mid){
            std::cout << "NO";
            return 0;
        }
    }
    std::cout << "YES";
    return 0;
}