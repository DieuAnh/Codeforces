#include <iostream>

using namespace std;

int main(){
    std::string num;
    std::cin >> num;
    int n = num.length();
    for (int i = 1; i < n; i++){
        if (num[i] > '4'){
            num[i] = 48 + '9' - num[i];
        }
    }
    if (num[0] != '9' && num[0] > '4'){
        num[0] = 48 + '9' - num[0];
    }
    std::cout << num;
    return 0;
}