#include <iostream>

using namespace std;

int main(){
    int n, count;
    std::string s;
    std::cin >> n;
    if (!n%4){
        count = n/4;
    }
    else count = n/4 + 1;
    for (int i = 0; i < count; i++){
        s += "ROYG";
    }
    for (int j = 0; j < n - 3; j++){
        std::cout << s[j];
    }
    std::cout << "BIV";
    return 0;
}