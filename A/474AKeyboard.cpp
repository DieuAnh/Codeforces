#include <iostream>
#include <string>

using namespace std;

std::string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

char left(char letter)
{
    char result;
    for (int i = 0; i < keyboard.length()-1; i++)
    {
        if (keyboard[i] == letter)
        {
            result = keyboard[i+1];
        }         
    }
    return result;
}
char right(char letter)
{
    char result;
    for (int i = 1; i < keyboard.length(); i++)
    {
        if (keyboard[i] == letter)
        {
            result = keyboard[i-1];
        }
            
    }
    return result; 
}
int main()
{
    char LorR;
    std::string s;
    std::cin >> LorR;
    std::cin >> s;
    if (LorR == 'L')
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = left(s[i]);
        }
    }
    if (LorR == 'R')
    {
        for (int j = 0; j < s.length(); j++)
        {
            s[j] = right(s[j]);
        }
    }
    std::cout << s;
    return 0;
}