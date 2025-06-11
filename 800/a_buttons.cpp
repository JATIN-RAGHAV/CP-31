#include <iostream>
using namespace std;

void solver(){
        int a,b,c;
        cin >> a >> b >> c;
        int f = a,s = b;
        f += c/2;
        s += c/2;
        f = c % 2 == 0 ? f : f + 1; 
        if(f <= s)
                cout << "Second\n";
        else
                cout << "First\n";
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
