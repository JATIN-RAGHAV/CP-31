#include <cstdint>
#include <iostream>
using namespace std;

void solver(){
        int64_t a,b,n,c,t;
        cin >> a >> b >> n;
        t = b;

        while(n--){
                cin >> c;
                if(c < a)
                        t += c;
                else
                        t += a - 1;
        }

        cout << t << '\n';
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
