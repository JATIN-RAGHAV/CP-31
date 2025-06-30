#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef int64_t int6;
#define all(x) x.begin(),x.end()
#define pb push_back
#define B .back()
#define repl(i,s,n) for (int i = s; i < n; i++)
#define repe(i,s,n) for (int i = s; i <= n; i++)
void solver(){
        string a,b;
        cin >> a >> b;
        int mx = 0;
        repl(i,0,a.size()){
                repl(j,0,b.size()){
                        int cmx = 0;
                        int ia,ib;
                        ia = i,ib = j;
                        while(a[ia] == b[ib] && ia < a.size() && ib < b.size()){
                                cmx++;
                                ia++;
                                ib++;
                        }
                        mx = max(cmx,mx);
                }
        }
        cout << a.size()+b.size()-(2*mx) << '\n';
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
