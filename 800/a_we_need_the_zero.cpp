#include <iostream>
using namespace std;

void solver(){
        int n,c,l,x;
        cin >> n;
        l = n;
        cin >> x;

        while(--l){
                cin >> c;
                x ^= c;
        }
        if(n % 2 == 0){
                if(x == 0)
                        cout << "0\n";
                else
                        cout << "-1\n";
        }
        else{
                cout << x << '\n';
        }

}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
