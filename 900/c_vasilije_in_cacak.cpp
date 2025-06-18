#include <cstdint>
#include <iostream>
using namespace std;

void solver(){
        int64_t n,k,x;
        cin >> n >> k >> x;

        int64_t smallest, largest,f = n - k;
        smallest = (k*(k+1))/2;
        largest = ((n*(n+1))/2)  - ((f*(f+1))/2);
        if( x >= smallest && x <= largest)
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
