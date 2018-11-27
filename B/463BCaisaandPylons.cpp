#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, h;
    std::cin >> n;
    std::vector<int> vec;
    vec.push_back(0);
    for (int i = 0; i < n; i++){
        std::cin >> h;
        vec.push_back(h);
    }
    int energy = 0, pay = 0;
    for (int j = 1; j <= n; j++){
        if (vec[j] > energy + vec[j-1]){
            if (vec[j] > vec[j-1]){
                pay += vec[j] - vec[j-1] - energy;
                energy = 0;
            }
            //std::cout << "pay " << pay << endl;
        }
        else{
            energy += vec[j-1] - vec[j];
            //std::cout << "energy " << energy << endl;
        }
    }
    std::cout << pay;
    return 0;
}