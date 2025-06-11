#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
        int n,c,min;
        
        cin >> n;
        cin >> c;
        min = abs(c);
        while(--n){
                cin >> c;
                c = abs(c);
                min = c < min ? c : min;
        }
        cout << min;
}
