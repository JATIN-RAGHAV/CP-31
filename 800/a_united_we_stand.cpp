#include <iostream>
#include <vector>
using namespace std;

void solver(){
        int n,x,max,min;
        cin >> n;
        vector<int> a,b,c;
        cin >> max;
        min = max;
        a.push_back(min);
        while(--n){
                cin >> x;
                a.push_back(x);
                min = x < min ? x : min;
                max = x > max ? x : max;
        }

        if(min != max){
                for(int x : a){
                        if(x == max){
                                c.push_back(x);
                        }else{
                                b.push_back(x);
                        }
                }
                cout << b.size() << ' ' << c.size() << '\n';
                for(int x : b){
                        cout << x << ' ';
                }
                cout << '\n';
                for(int x : c){
                        cout << x << ' ';
                }
                cout << '\n';
        }
        else{
                cout << -1 << '\n';
        }
        
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
