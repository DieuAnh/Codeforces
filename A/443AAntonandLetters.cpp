#include <iostream>
#include <vector>

using namespace std;

int main()
{
    std::string s;
    std::getline(std::cin, s);
    std::vector<char> v;
    int count = 0;
    for (int i = 1; i < s.length() - 1; )
    {
        count++;
        v.push_back(s[i]);
        for (int j = 0; j < (v.size() - 1); j++)
        {
            if (s[i] == v[j])
            {
                count--;
                v.pop_back();
                break;
            }
                
        }
        i += 3;
    }
    std::cout << count;
    return 0;
}