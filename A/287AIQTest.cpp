#include <iostream>

using namespace std;
char arr[4][4];

bool haveThreeOrFourCellWithSameColor(int i,int j){
    int count = 0;
    if (arr[i][j] == '#')
        count++;
        else count--;
    if (arr[i+1][j] == '#')
        count++;
        else count--;
    if (arr[i][j+1] == '#')
        count++;
        else count--;
    if (arr[i+1][j+1] == '#')
        count++;
        else count--;
    //std::cout << "i=" <<i << "and" << "j=" << j <<' '<< count << '-';
    if (count == 2 || count == 4 || count == -2 || count == -4)
        return true;
        else return false;
}

int main(){
    for (int k = 0; k < 4; k++){
        for (int l = 0; l < 4; l++){
            std::cin >> arr[k][l];
        }
    }
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3; j++){
            if (haveThreeOrFourCellWithSameColor(i,j)){
                std::cout << "YES";
                return 0;
            }
        }
    }
    std::cout << "NO";
    return 0;
}