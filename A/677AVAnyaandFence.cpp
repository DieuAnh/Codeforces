#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int number;
   int hfence;
   int height;
   int width = 0;
   std::vector<int> list_height;
   std::cin >> number;
   std::cin >> hfence;

   for (int i = 0; i < number; ++i)
   {
        std::cin >> height;
        list_height.push_back(height);
   }
   for (int i = 0; i < number; ++i)
   {
        if (list_height[i] <= hfence)
            width = width + 1;
        else width =width + 2;
   }
   std::cout << width <<std::endl;
   return 0;
}