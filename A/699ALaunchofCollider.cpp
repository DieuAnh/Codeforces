#include <iostream>

using namespace std;

int main(){
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    int coordinate[n];
    for (int i = 0; i < n; i++){
        std::cin >> coordinate[i];
    }
    int min = coordinate[n-1];
    int ok = 0;
    for (int j = 0; j < n-1; j++){
        if (s[j] == 'R' && s[j+1] == 'L'){
            ok = 1;
            int first_moment = (coordinate[j+1] - coordinate[j])/2;
            /*if (first_moment < min){
                min = first_moment;
            }*/
            min = std::min(first_moment,min);
        }
    }
    if (ok)
        std::cout << min;
    else std::cout << -1;
    return 0;
}