#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
   int n;
   std::cin >> n;
   std::string s;
   std::vector<std::string> v, v_different_team;
   std::map<std::string, int> win;
   for (int i = 0; i < n; i++){
       std::cin >> s;
       v.push_back(s);
   }
   
   v_different_team.push_back(v[0]);
   win[v_different_team[0]] = 1;
   for (int j = 1; j < n; j++){
       bool same = false;
       for (int k = 0; k < v_different_team.size(); k++){
           if (v[j] == v_different_team[k]){
               win[v_different_team[k]]++;
               same = true;
               break;
           }
       }
       if (same == false){
           v_different_team.push_back(v[j]);
           win[v_different_team[v_different_team.size() - 1]] = 1;
       }
   }
   int max = win[v_different_team[0]];
   int it = 0;
    for (int l = 1; l < v_different_team.size(); l++){
        if (win[v_different_team[l]] > max){
                max = win[v_different_team[l]];
                it = l;
        }
    }
    std::cout << v_different_team[it];
    return 0;
}
