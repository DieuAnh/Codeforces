#include <iostream>
#include <iostream>

using namespace std;
 int main(){
     int n;
     std::cin >> n;
     char matrix[n][n];
     char x,o;
     for (int i = 0; i < n; i++){
         for (int j = 0; j < n; j++){
             std::cin >> matrix[i][j];
             x = matrix[0][0];
             if (n > 2) o = matrix[0][1];
             if (i == j){
                 if (matrix[i][j] != x){
                     std::cout << "NO";
                     return 0;
                 }
             }
             else if (i + j == (n - 1)){
                 if (matrix[i][j] != x){
                     std::cout << "NO";
                     return 0;
                 }
             }
             else if(n > 2 && (matrix[i][j] != o || matrix[i][j] == x)){
                    std::cout << "NO";
                     return 0;
             }
         }
     }
     std::cout << "YES";
     return 0;
 }