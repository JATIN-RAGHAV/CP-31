#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solver(){
        int score = 0;
        vector<string> matrix(10);
        for(int i = 0; i < 10; i++){
                cin >> matrix[i];
                for(int j = 0; j < 10; j++){
                        if(matrix[i][j] == 'X'){
                                if(i >= 4 && i <= 5 && j >= 4 && j <= 5)
                                        score += 5;
                                else if(((i == 3 || i == 6) && j >= 3 && j <= 6) || (j == 3 || j == 6) && i >= 3 && i <= 6){
                                        score += 4;
                                }
                                else if(((i == 2 || i == 7) && j >= 2 && j <= 7) || (j == 2 || j == 7) && i >= 2 && i <= 7){
                                        score += 3;
                                }
                                else if(((i == 1 || i == 8) && j >= 1 && j <= 8) || (j == 1 || j == 8) && i >= 1 && i <= 8){
                                        score += 2;
                                }
                                else if(((i == 0 || i == 9) && j >= 0 && j <= 9) || (j == 0 || j == 9) && i >= 0 && i <= 9){
                                        score += 1;
                                }
                        }
                }
        }
        cout << score << '\n';
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
