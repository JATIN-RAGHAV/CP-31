#include <iostream>
using namespace std;

void solver(){
        int n,c = 0;
        cin >> n;

        string s;
        cin >> s;

        while(s[c] + s[n-c-1] == '0' + '1' && c < n / 2){
               c++; 
        }
        cout << n - 2 * c << '\n';
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
