#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //  Rules for new passwords: 
    //  length = n
    //  distinct symbols = k
    //  not two consecutive with same symbol
    int n, k;
    string s = "abcdefghiklmnopqrtwxyzuvsj";
    std::cin >> n >> k;  
    int j = 0;
    for (int i = 0; i < n; i++)
    {  
        if (j == k){
            j = 0;
        }
        std::cout << s[j];
        j++; 
    }
    return 0;
}