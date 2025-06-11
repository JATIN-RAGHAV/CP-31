#include <iostream>
using namespace std;

void solver(){
        int n, x,min,start;
        cin >> n;
        cin >> x;
        start = min = x;
        while(--n){
                cin >> x;
                min = x < min ? x : min;
        }
        if(min == start)
                cout << "YES\n";
        else
                cout << "NO\n";
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
