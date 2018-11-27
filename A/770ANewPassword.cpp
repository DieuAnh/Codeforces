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
/*
    std::vector<char> d, pw;
    for (int i = 0; i < k; i++){
        d.push_back(s[i]);
    }
    for (int j = 0; j < n/k + 1; j++){
        for (int m = 0; m < k; m++){
            pw.push_back(d[m]);
        }       
    }
    for (int l = 0; l < n; l++)
    {
        std::cout << pw[l];
    }
*/  
    int j = 0;
    for (int i = 0; i < n; i++)
    {  
        if (j == k){
            j = 0;
        }
        std::cout << s[j] << ' ';
        j++; 
    }
    return 0;
}