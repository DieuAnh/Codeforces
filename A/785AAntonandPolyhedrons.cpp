#include <iostream>

using namespace std;

int main(){
    int n, sum = 0;
    std::cin >> n;
    // std::string a[n];
    // for (int i = 0; i < n; i++){
    //     std::cin >> a[i];
    //     if (a[i] == "Tetrahedron") sum += 4;
    //     else if (a[i] == "Cube") sum += 6;
    //     else if (a[i] == "Octahedron") sum += 8;
    //     else if (a[i] == "Dodecahedron") sum += 12;
    //     else sum += 20; 
    // }
    std::string s;
    while(n--){
        std::cin >> s;
        if (s == "Tetrahedron") sum += 4;
        else if (s == "Cube") sum += 6;
        else if (s == "Octahedron") sum += 8;
        else if (s == "Dodecahedron") sum += 12;
        else sum += 20; 
    }
    std::cout << sum;
    return 0;
}