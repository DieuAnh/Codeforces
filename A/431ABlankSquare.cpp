#include <iostream>
 
using namespace std;

int main()
{
   int a, b, c ,d;
   std::cin >> a >> b >> c >> d;
   std::string s;
   std::cin >> s;
   int sum = 0;
   for (int i = 0; i < s.size(); i++)
   {
       if (s[i] == '1')
            sum += a;
       else if (s[i] =='2')
            sum += b;
            else if (s[i] == '3')
                sum += c;
                else sum += d;
   }
   std::cout << sum;
   return 0;
}