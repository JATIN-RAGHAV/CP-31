#include <cstdint>
#include <iostream>
using namespace std;

void solver(){
        int64_t a,b,c,d;
        cin >> a >> b >> c >> d;
        c -= a;
        d -= b;
        a = b = 0;
        if(d < 0 || c > d)
                cout << "-1\n";
        else{
                cout << d + d - c << '\n';
        }

}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
