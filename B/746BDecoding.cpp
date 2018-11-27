#include <iostream>

using namespace std;

int main(){
    int n;
    std::cin >> n;
    std::string s, ans;
    std::cin >> s;
    int sign = 1;
    ans.resize(n);
    for (int i = 0; i < n; i++){
        if (n%2 == 1){
            ans[n/2 + sign * (i + 1)/2] = s[i];
            sign *= -1;
        }
        else{
            sign *= -1;
            ans[(n-1)/2 + sign * (i + 1)/2] = s[i];
        }
    }
    std::cout << ans;  
    return 0;
}