#include <iostream>

using namespace std;

int main(){
    std::string s;  // difference: char s[n];
    std::cin >> s;
    std::string sp = " ";
    for (int i = 0; i < s.length() - 2;){
        bool wub = false;
        //std::cout << "i = " << i <<std::endl;
        if ( s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B'){
            wub = true;
            //s[i] = ' ';
            s.erase(i,3);
            s.insert(i,sp);
            //std::cout << i << ' ' << s.length()<< s << std::endl;
        }
        if (wub == false) i++;
    }
    while (s[0] == ' ')
            s.erase(0,1);
    for (int j = 1; j < s.length(); j++){
        if (s[j] == ' ' && s[j + 1] == ' '){
            s.erase(j,1);
            j--;
        }
    }
    while (s[s.length() - 1] == ' ')
        s.erase(s.length() - 1,1);
    std::cout << s;
    return 0;
}