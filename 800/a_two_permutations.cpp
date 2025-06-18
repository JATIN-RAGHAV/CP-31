#include <iostream>
using namespace std;

void solver(){
        int n,a,b;
        cin >> n >> a >> b;

        if(n > a + b + 1 || ((a == b) && (b == n)))
                cout << "Yes\n";
        else
                cout << "No\n";

}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
