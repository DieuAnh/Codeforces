#include <iostream>

using namespace std;

int main(){
    int n;
    std::cin >> n;
    int a[n], b[n];
    bool exit = false;
    int start = 0;
    for (int i = 0; i < n; i++){
        std::cin >> a[i] >> b[i];
        if (a[i] == b[i] && exit == false){
            start = i;
        }
        else exit = true;
    }
    for (int j = start; j < n; j++){
        for (int k = j+1; k < n; k++){
            if ((a[j] < a[k] && b[j] > b[k]) || (a[j] > a[k] && b[j] < b[k])){
                std::cout << "Happy Alex";
                return 0;
            }
        }
    }
    std::cout << "Poor Alex";
    return 0;
}