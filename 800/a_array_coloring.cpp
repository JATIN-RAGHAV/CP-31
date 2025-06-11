#include <iostream>
using namespace std;

void solver(){
        int n,c,oddc = 0;
        cin >> n;

        while(n--){
                cin >> c;
                oddc = c % 2 == 1 ? oddc + 1 : oddc;
        }
        if(oddc % 2 == 0)
                cout << "YES\n";
        else
                cout << "NO\n";
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
