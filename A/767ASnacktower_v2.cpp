//this is not my code, from another's
#include <iostream>

using namespace std;

int main(){
   int n, x, a[100000]= {0};
   std::cin >> n;
   int m = n;
   for (int i = 0; i < n; i++){
       std::cin >> x;
       a[x] = 1;
       while (a[m] == 1){
           std::cout << m << ' ';
           m--;
       }
       std::cout << std::endl;
   }
}