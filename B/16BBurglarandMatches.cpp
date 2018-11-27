#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

//similar to knapsack problem 
int main(){
    int n, m, a, b;
    std::cin >> n >> m;
    std::vector< std::pair <int,int> > vect;
    for (int i = 0; i < m; i++){
        std::cin >> a >> b;
        vect.push_back( std::make_pair(b, a) );
    }
    std::sort(vect.rbegin(), vect.rend());
    // for (int k = 0; k < m; k++){
    //     std::cout << vect[k].second << ' ' << vect[k].first << std::endl;
    // }
    int sum = 0;
    for (int j = 0; n > 0 && j < m; j++){
        if (vect[j].second <= n){
            sum += vect[j].second * vect[j].first;
            std::cout << "sum is " << sum << std::endl;
        }
        else{
            sum += n * vect[j].first;
            std::cout << "sum is " << sum << std::endl;
        }
        n -= vect[j].second;
    }
    std::cout << sum;
    return 0;
}