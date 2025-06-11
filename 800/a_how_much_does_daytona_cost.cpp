#include <iostream>
using namespace std;

void solver(){
        int n,k,c;
        cin >> n >> k;
        while(n--){
                cin >> c;
                if(k != -1 && c == k){
                        cout << "YES\n";
                        k = -1;
                }
        }
        if(k != -1)
                cout << "NO\n";
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
