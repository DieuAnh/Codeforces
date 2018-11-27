#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m;
    char c;
    int count = 0;
    std::cin >> n >> m >> c;
    char arr[n][m];
    std::vector<char> vec;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std::cin >> arr[i][j];
        }
    }
    for (int k = 0; k < n; k++){
        for (int l = 0; l < m; l++){
            if (arr[k][l] == c){
                
            }
        }
    }
}