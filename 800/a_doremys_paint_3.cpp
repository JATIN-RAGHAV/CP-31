#include <cstdlib>
#include <iostream>
using namespace std;

void solver(){
        int n,c,solved = 0,x = -1,y = -1,xc = 0,yc = 0;
        cin >> n;
        while(n--){
                cin >> c;
                if(!solved){
                        if(x == -1){
                                x = c;
                                xc++;
                        }
                        else{
                                if(y == -1){
                                        if(c != x){
                                                y = c;
                                                yc++;
                                        }
                                        else
                                                xc++;
                                }
                                else{
                                        if(c == x)
                                                xc++;
                                        else if(c == y)
                                                yc++;
                                        else{
                                                xc = -10;
                                                solved = 1;
                                        }
                                }
                        }
                }
        }


        if(y == -1 || abs(xc - yc) <= 1)
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
