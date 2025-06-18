#include <cstdlib>
#include <iostream>
using namespace std;

void solver(){
        int n;
        cin >> n;

        string s;
        cin >> s;
        int clt,cgt,mlt,mgt;
        clt = cgt = mlt = mgt = 0;

        for(char ch : s){
                if(ch == '<'){
                        clt++;
                        cgt = 0;
                }
                else{
                        cgt++;
                        clt = 0;
                }
                mlt = clt > mlt ? clt : mlt;
                mgt = cgt > mgt ? cgt : mgt;
        }
        cout << max(mgt,mlt) + 1 << '\n';
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
