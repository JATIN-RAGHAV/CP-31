#include <iostream>
#include <vector>
using namespace std;

void solver(){
        int n,c,c2 = 0;
        cin >> n;

        vector<int> a;
        while(n--){
                cin >> c;
                a.push_back(c);
                if(c == 2)
                        c2++;
        }

        if(c2 % 2 == 0){
                int cc2 = 0;
                for(int i = 0; i < a.size(); i++){
                        if(a[i] == 2){
                                cc2++;
                        }
                        if(cc2 == c2/2){
                                cout << i+1 << '\n';
                                break;
                        }
                }
        }else
                cout << "-1\n";
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
