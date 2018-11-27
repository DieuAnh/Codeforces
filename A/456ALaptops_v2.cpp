#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    std::cin >> n;
    std::vector< pair<int,int> > laptop(n);
    int x, y;
    for (int i = 0; i < n; i++){
        std::cin >> x >> y;
        laptop[i] = std::make_pair(x,y); 
    }
    std::sort(laptop.begin(),laptop.end());
   for (int j = 0; j < n - 1; j++){
       if (laptop[j].second > laptop[j+1].second){
           std::cout << "Happy Alex";
           return 0;
       }
   }
   std::cout << "Poor Alex";
   return 0;
}