#include <iostream>

using namespace std;
int toSum(string n){
    int sum = 0;
    for (int i = 0; i < n.length(); i++){
        sum += int(n[i]-'0');
    }
    //std::cout << "sum is " << sum << endl;
    return sum;
}
int main(){
    string n, temp;
   int count = 0;
   std::cin >> n;
   while (n.length() > 1){
       temp = n;
        n = std::to_string(toSum(temp)) ;
        count++;
   }
   std::cout << count;
   return 0;
}