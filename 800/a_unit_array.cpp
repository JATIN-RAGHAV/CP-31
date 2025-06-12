#include <iostream>
using namespace std;

void solver(){
        int n,c,p1 = 0,n1 = 0;
        cin >> n;

        while(n--){
                cin >> c;
                if(c == -1)
                        n1++;
                else
                        p1++;
        }

        c = 0;
        
        if(n1 % 2 != 0){
                n1--;
                p1++;
                c++;
        }
                
        if(p1 >= n1)
                cout << c << '\n';
        else{
                n = ((n1 - p1) + 1)/2;
                if(n % 2 != 0)
                        c += n+1;
                else
                        c += n;
                cout << c << '\n';
        }
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
