#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    int n, a;
    long long l;
    std::cin >> n >> l;
    std::vector<long double> lan, rad;
    for (int i = 0; i < n; i++){
        std::cin >> a;
        lan.push_back(a);
    }
    std::sort(lan.begin(), lan.end());
    rad.push_back(lan[0]);
    for(int j = 1; j < n; j++){
        rad.push_back((lan[j] - lan[j-1])/2.0);
    }
    rad.push_back(l-lan[lan.size()-1]);
    std::sort(rad.begin(), rad.end());

    std::cout << std::fixed;
    std::cout << std::setprecision(10);
    std::cout << rad[rad.size()-1];
    return 0;
}