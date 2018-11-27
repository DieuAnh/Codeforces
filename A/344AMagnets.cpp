#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int n; 
   std::cin >> n;
   int count = 1;
   if (n == 0) count = 0;
   
   vector<string> s(n);
   for (int i = 0; i < n; i++)
   {
        std::cin >> s[i];
   }
   for (int j = 0; j < n - 1; j++)
   {
        if (s[j] != s[j+1])
        {
            count += 1;
        }
   }
   std::cout << count;
   return 0;
}