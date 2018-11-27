#include <iostream>

using namespace std;

int main()
{
   int number;
   int count_A = 0;
   int count_D = 0;
   std::cin >> number;
/*  char AorD;
   std::string s = "";
   std::cin >> number;
   for (int k = 0; k < number; ++k)
   {
        std::cin >> AorD;
        s += AorD;
   }
   */
   std::string s;
   std::cin >> s;
   for (int i = 0; i < s.size(); ++i)
   {
       if (s[i] == 'A')
            count_A += 1;
        else if (s[i] == 'D')
            count_D += 1;
   }
   if (count_A > count_D)
        std::cout << "Anton";
    else if (count_A < count_D)
        std::cout << "Danik";
    else 
        std::cout << "Friendship";
    return 0;
}