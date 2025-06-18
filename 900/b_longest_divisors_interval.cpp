#include <cstdint>
#include <iostream>
using namespace std;

void solver(){
        int64_t n,c = 1;
        cin >> n;
        while(n % c == 0)
                c++;
        cout << c-1 << '\n';
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
