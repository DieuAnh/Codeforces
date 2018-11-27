#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int n;
   int count = 0;
   std::cin >> n;
   vector<int> s;
   int t;
   for (int i = 0; i < 2*n; i++)
   {
       std::cin >> t;
       s.push_back(t);
   }
   /*
   int s[100];
   for (int i = 0; i < 2*n; i++)
   {
       std::cin >> s[i];
   }
   */
   /*mang dong
   int *s = new int [n];
   */
   for (int j = 0; j < 2*n; )
   {
       for (int k = 1; k < 2*n;)
       {
           if (s[j] == s[k] && k != (j + 1))
            count++;
            k += 2;
       }
       j += 2;
   }
   std::cout << count;
   return 0;
}