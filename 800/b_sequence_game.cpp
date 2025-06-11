#include <iostream>
#include <vector>
using namespace std;

void solver(){
        int n,c;
        vector<int> b,a;
        cin >> n;
        while(n--){
                cin >> c;
                b.push_back(c);
        }
        a.push_back(b[0]);
        for(int i = 1; i < b.size(); i++){
                if(b[i] >= b[i-1]){
                        a.push_back(b[i]);
                }else{
                        a.push_back(b[i]);
                        a.push_back(b[i]);
                }
        }
        cout << a.size() << '\n';
        for(int x : a)
                cout << x << ' ';
        cout << '\n';
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
