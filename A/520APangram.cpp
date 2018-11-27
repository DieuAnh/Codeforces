#include <iostream>

using namespace std;

int main(){
    string alphabet = "azertyuiopqsdfghjklmwxcvbn";
    int n, exit = 0;
    string s;
    std::cin >> n >> s;
    for (int i = 0; i < alphabet.size(); i++){
        int c = 0;
        for (int j = 0; j < n; j++){
            if (s[j] != alphabet[i] && s[j] != char(int(alphabet[i]) - 32)){
                c++;
                if (c == n){
                    exit = 1;
                    std::cout << "NO";
                    return 0;
                } 
            }
        }
    }
    if (exit == 0) std::cout << "YES";
    return 0;
}