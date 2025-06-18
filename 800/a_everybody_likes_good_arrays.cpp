#include <iostream>
using namespace std;

void solver(){
        int n,c,a = 0,l;
        cin >> n;
        cin >> l;

        while(--n){
                cin >> c;
                if(c % 2 == l % 2)
                        a++;
                l = c;
        }
        cout << a << '\n';
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
