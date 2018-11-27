#include <iostream>

using namespace std;

int main(){
    std::string s, t;
    std::cin >> s >> t;
    for (int i = 0; i < s.length();){
        if (s[i] == t[t.length() - 1 - i]){
            i++;
        }
        else{
            std::cout << "NO";
            return 0;
        }
    }
    std::cout << "YES";
    return 0;
}