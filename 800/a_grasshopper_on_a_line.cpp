#include <iostream>
using namespace std;

void solver(){
        int x, k;
        cin >> x >> k;
        if(x % k != 0)
                cout << "1\n" << x << '\n';
        else{
                cout << "2\n" << x+1 << " -1\n";
        }
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
