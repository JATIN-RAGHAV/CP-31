#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef int64_t int6;
#define all(x) (x.begin(),x.end());
#define pb push_back
#define B .back()
#define repl(i,s,n) for (int i = s; i < n; i++)
#define repe(i,s,n) for (int i = s; i <= n; i++)
void solver(){
        int n,c,i,j,k,l,dec = 1,d=0;
        cin >> n;
        i = j = k = -1;

        cin >> l;

        repl(x,1,n){
                cin >> c;
                if(!d){
                        if(dec && c > l){
                                dec = 0;
                                i = x;
                        }
                        if(!dec && c < l){
                                j = x;
                                k = x+1;
                                d = 1;
                        }
                        l = c;
                }
        }
        if(k!=-1)
                cout << "YES\n" << i << ' ' << j << ' ' << k << '\n';
        else
                cout << "NO\n";



}

int main(){
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
