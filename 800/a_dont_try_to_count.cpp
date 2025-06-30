#include "bits/stdc++.h"
using namespace std;

void solver(){
        int n,m,i = 0,d=0;
        cin >> n >> m;
        string x,s;
        cin >> x >> s;
        int pos = x.find(s);
        if(pos != string::npos){
                        cout << i << '\n';
                        d = 1;
        }
        else{
                while(x.size() <= 5*s.size() || i < 2){
                        pos = x.find(s);
                        if(pos != string::npos){
                                cout << i << '\n';
                                d = 1;
                                break;
                        }
                        x += x;
                        i++;
                }
                if(d != 1){
                        x += x;
                        i++;
                        int pos = x.find(s);
                        if(pos != string::npos){
                                cout << i << '\n';
                                d = 1;
                        }else
                                cout << "-1\n";
                }
        }
}

int main(){
        int t;
        cin >> t;
        while(t--){
                solver();
       }
}
