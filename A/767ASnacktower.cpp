#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
   double n, x;
   std::cin >> n;
   std::vector<int> a, b, c;
   for (int k = 0; k < n; k++){
       std::cin >> x;
       a.push_back(x);
   }
   b = a;
   std::sort(b.rbegin(), b.rend());
   for (int i = 0; i < n; i++){
       for (int j = 0; j < n; j++){
            if (a[j] == b[i]){
                c.push_back(j);
            }
       }       
   }
   int cnt = 0;
   for (int l = 0; l < n; l++){
       if (c[l] <= cnt){
            std::cout << b[l] << ' ';
       }   
        else{
            //if ((c[l]-cnt) != 0) std::cout << std::endl;
            for (int m = cnt ; m < c[l]; m++){
                std::cout << std::endl;  
            }
            std::cout << b[l] << ' ';
            cnt = c[l];
        }
   }
   return 0;
}