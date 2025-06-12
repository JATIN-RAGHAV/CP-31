#include <iostream>
using namespace std;

void solver(){
        int n,c,s;
        cin >> n;
        s = 1 + n;

        while(n--){
                cin >> c;
                cout << s - c << ' ';
        }

        cout << '\n';
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
