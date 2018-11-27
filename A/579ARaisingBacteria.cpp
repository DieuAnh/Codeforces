#include <iostream>

using namespace std;
int maxPowerOfTwo(int x){
    int power = 1;
    while (power <= x){
        power *= 2;
    }  
    return power/2;
}
int main(){
    long long int x;
    std::cin >> x;
    int count = 0;
    while(x > 0){
        x = x - maxPowerOfTwo(x);
        count++;
    }
    std::cout << count;
    return 0;
}
