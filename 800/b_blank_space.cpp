#include <iostream>
using namespace std;

void solver(){
        int n, max = 0, c, cl = 0;
        cin >> n;

        while(n--){
                cin >> c;
                cl = c == 0 ? cl + 1 : 0;
                max = cl > max ? cl : max;
        }
        cout << max << '\n';
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
