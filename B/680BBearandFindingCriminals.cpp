#include <iostream>

using namespace std;

int main(){
    int n, a;
    std::cin >> n >> a;
    int t[n];
    for (int i = 0; i < n; i++){
        std::cin >> t[i];
    }
    int count = 0;
    for (int j = a - 1; j >= 0; j--){
        if (t[j] == 1){
            count++;
        }
    }
    int ind = 1;
    for (int k = a; k <= 2 * (a - 1) && k < n; k++){
        if (t[k] == 1){
            if (t[a-1-ind] == 1){
                count++;
            }
        }
        else{
            if (t[a-1-ind] == 1){
                count--;
            }
        }
        ind++;
    }
    for (int l = 2 * (a - 1) + 1; l < n; l++){
        if (t[l] == 1){
            count++;
        }
    }
    std::cout << count;
    return 0;
}