
#include <iostream>
#include <string>
using namespace std;

void solver(){
        int n,c = 0,r = 0,x;
        cin >> n;
        string cells;
        cin >> cells;
        for(char x : cells){
                if(x == '#'){
                        if(c != 0){
                                if(c == 1)
                                        r++;
                                else if(c >= 3){
                                        cout << 2 << '\n';
                                        return;
                                }
                                else
                                        r += 2;
                        }
                        c = 0;
                }else{
                        c++;
                }
        }
        if(cells.back() == '.'){
                if(c == 1)
                        r++;
                else if(c >= 3){
                        cout << 2 << '\n';
                        return;
                }
                else
                        r += 2;
        }
        cout << r << '\n';
}

int main(){
        int t;
        cin >> t;
        while(t--){
                solver();
        }
}
