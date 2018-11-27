#include <iostream>

using namespace std;

int main(){
   int n;
   std::cin >> n;
   signed long int x[n];
   for (int i = 0; i < n; i++){
       std::cin >> x[i];
   }
   std::cout << x[1] - x[0] << ' ' << x[n - 1] - x[0] << std::endl;
   for (int j = 1; j < n - 1; j++){
       std::cout << std::min(x[j + 1] - x[j],x[j] - x[j - 1]) << ' ' << std::max(x[n - 1] - x[j], x[j] - x[0])<< std::endl;
   }
   std::cout << x[n - 1] - x[n - 2] << ' ' << x[n - 1] - x[0] << std::endl;
   return 0;
}