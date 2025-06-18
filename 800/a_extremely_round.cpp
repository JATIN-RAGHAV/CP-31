#include <iostream>
using namespace std;

void solver(){
        int n,a = 0;
        cin >> n;
        
        while(n){
                if(n <= 9)
                        a += n;
                else
                        a += 9;
                n = n / 10;
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
