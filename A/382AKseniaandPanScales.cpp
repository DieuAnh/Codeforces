#include <iostream>

using namespace std;

int main(){
    std::string s, s1, s2, sadd;
    std::cin >> s;
    std::cin >> sadd;
    std::size_t pos = s.find("|");
    s1 = s.substr(0,pos);
    s2 = s.substr(pos + 1);
    int count = 1;
    while (count > 0){
        if (s1.length() <= s2.length()){
            s1 += sadd[0];
            sadd.erase(0,1);
            count = sadd.length();
        }
        else{
            s2 += sadd[0];
            sadd.erase(0,1);
            count = sadd.length();
        }
    }
    if (s1.length() == s2.length()){
        std::cout << s1 + '|' + s2;
    }
    else std::cout << "Impossible";
    return 0;
}