#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

int main(){
       int n,m,q,c;
       cin >> n >> m >> q;

       vector<int> arr1,arr2,row,col;

       for( int i = 0; i<n; i++){
               cin >> c;
               arr1.push_back(c);
               row.push_back(0);
       }

       cout << "first done\n";

       for(int j = 0; j < m; j++){
               cin >> c;
               arr2.push_back(c);
               col.push_back(0);
       }

       cout << "cool\n";
       vector<vector<int>> matrix(n, vector<int>(m));
       cout << "Very cool";
        
       int total;
       for(int i = 0; i < n; i++)
               for(int j = 0; j < m; j++){
                       matrix[i][j] = arr1[i]*arr2[j];
                       total += matrix[i][j];
                       col[i] += matrix[i][j];
               }

       for(int j = 0; j < m; j++)
               for(int i = 0; i < n; i++)
                       row[j] += matrix[i][j];

       while(q--){
               int sum = 0;
                cin >> c;
                for(int i = 0; i < n; i++)
                        for(int j = 0; j < m; j++){
                                sum = total - row[i] - col[j] + matrix[i][j];
                                if(sum == c){
                                        cout << "YES\n";
                                        while(q--)
                                                cin >> c;
                                }
                        }
                cout << "NO\n";
       }
}
