#include <iostream>
using namespace std;

void solver(){
        int n,l,c,mind;
        cin >> n;
        cin >> l;
        cin >> c;
        n--;
        if(c < l){
                mind = -1;
                while(--n)
                        cin >> c;
        }
        else
                mind = c - l;
        l = c;

        while(n && --n){
                cin >> c;
                if(c < l){
                        mind = -1;
                        while(--n)
                                cin >> c;
                        break;
                }
                else{
                        mind = c - l < mind ? c - l : mind;
                }
                l = c;
        }

        if(mind < 0)
                cout << "0\n";
        else{
                int ans;
                ans = mind / 2;
                ans++;
                cout << ans << '\n';
        }
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
