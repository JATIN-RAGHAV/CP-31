#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define pb push_back
#define repl(i,s,n) for (int i = s; i < n; i++)
#define repe(i,s,n) for (int i = s; i <= n; i++)

void solver(){
        int n,c,cnt=0 ;
        cin >> n;

        bool s = true;

        while(n--){
                cin >> c;
                if(c == 0){
                        if(!s)
                                s = true;
                }else if(s){
                        s = false;
                        cnt++;
                }
        }
        cout << (cnt >= 2 ? 2 : cnt)<< '\n';

}

int main(){
       ios::sync_with_stdio(0);
       cin.tie(0);
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
