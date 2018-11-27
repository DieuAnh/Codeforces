#include <iostream>

using namespace std;

int main(){
   int n, t;
   std::cin >> n >> t;
   if ( n == 1){
        if (t == 10){
        std::cout << -1;
        return 0;
        }
    }
    if (t == 10){
        for (int j = 0; j < n - 1; j++){
            std::cout << 9;
        }
        std::cout << 0;
    }
    else{
        for (int i = 0; i < n; i++){
            std::cout << t;
        }
    }
    return 0;
}