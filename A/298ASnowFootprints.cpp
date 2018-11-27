#include <iostream>

using namespace std;

int main(){
    int n, s = 0, t = 0, nR = 0, nL = 0, l = 0, r = 0;
    std::cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    int count = 0;
    for (int j = 0; j < n; j++){
        //find last left '.'
        if (arr[j] == '.' && arr[j+1] != '.' && count == 0){
            l = j;
            count++;
        }
        //find frst right '.'
        if (arr[j] != '.' && arr[j+1] == '.')
            r = j + 1;
        //find first R
        if (arr[j] != '.' && s == 0){
            s = j + 1;
        }
        //find first L
        if (arr[j] != arr[j+1] && arr[j] != '.' && t == 0){
            t = j + 1;
        }
        if (arr[j] == 'R') nR++;
        if (arr[j] == 'L') nL++;
    }
    if (nR == 0){
        s = r;
        t = l + 1;
    }
    if (nL == 0){
        s = l + 2;
        t = r + 1;
    }
    std::cout << s << ' ' << t;
    return 0;
}