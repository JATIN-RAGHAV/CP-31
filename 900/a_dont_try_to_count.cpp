#include <iostream>
#include <string>
using namespace std;

void solver(){
        int n,m,subpos,i = 0;
        cin >> n >> m;
        string x,s;
        cin >> x >> s;
        int size = s.length();
        while(x.size() <= size){
                int pos = x.find(s);
                if(pos != string::npos){
                        cout << i << '\n';
                }
                i++;
                x += x;
        }
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
