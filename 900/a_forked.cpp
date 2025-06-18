#include <cstdlib>
#include <iostream>
using namespace std;

void solver(){
        int a,b,xk,yk,xq,yq,dab;
        cin >> a >> b >> xk >> yk >> xq >> yq;
        int xd = abs(xk - xq), yd = abs(yk - yq);
        dab = abs(a-b);
        if((2*a == xd && 2*b == yd) || (2*a == yd && 2*b == xd))
                cout << "1\n";
        else if((a+b == xd && dab == yd) || (a+b == yd && dab == xd))
                cout << "2\n";
        else if((xd == 0 && (2*a == yd || 2*b == yd)) || (yd == 0 && (2*a == xd || 2*b == xd)))
                cout << "2\n";
        else if(a+b == xd && a+b == yd)
                cout << "2\n";
        else if((xd + a == b && yd + a == b) || (xd + b == a && yd + b == a))
                cout << "2\n";
        else
                cout << "0\n";
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
