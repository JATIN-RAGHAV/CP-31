#include <iostream>
using namespace std;

void solver(){
        int n,sum = 0,c;
        cin >> n;
        while(--n){
                cin >> c;
                sum += c;
        }
        cout << -sum << '\n';
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
