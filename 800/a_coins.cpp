#include <cstdint>
#include <iostream>
using namespace std;

void solver(){
        int64_t n,k;
        cin >> n >> k;
        if(n % 2 == 0 || n == k)
                cout << "YES\n";
        else{
                if(n < k)
                        cout << "NO\n";
                else{
                        if(k % 2 == 0)
                                cout << "NO\n";
                        else
                                cout << "YES\n";
                }
        }
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
