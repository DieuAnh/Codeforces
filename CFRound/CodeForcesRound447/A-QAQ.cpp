#include <iostream>
using namespace std;

int count(string a, string b, int m, int n)
{
    // If both first and second string is empty,
    //or if second string is empty, return 1
    if ((m == 0 && n == 0)|| n == 0)
        return 1;
    // If only first string is empty and second 
    // string is not empty, return 0
    if (m == 0)
        return 0;
    // If last characters are same
    // recursion for remaining strings by
    // 1. considering last characters of both strings
    // 2. ignoring last character of firs string
    if ( a[m - 1] == b[n - 1])
        return count(a, b, m - 1, n - 1) + count(a, b, m - 1,n);
    else 
        // If last characters are different, ignore
        // last char of first string and recur for remaining string
        return count(a, b, m - 1, n);
}
int main()
{
   std::string str;
   getline(std::cin,str);
   int m = str.size();
   std::cout << count (str, "QAQ", m, 3) << std::endl;
   return 0;
}
