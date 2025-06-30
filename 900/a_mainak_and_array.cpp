#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define pb push_back
#define repl(i,s,n) for (int i = s; i < n; i++)
#define repe(i,s,n) for (int i = s; i <= n; i++)

void solver(){
        int n,c,mn,mx,mni,mxi;
        cin >> n;

        vi a;
        cin >> c;
        mx = mn = c;
        mni = mxi = 0;
        a.pb(c);
        repl(i, 1,n){
                cin >> c;
                a.pb(c);
                if(c >= mx){
                        mx = c;
                        mxi = i;
                }
                if(c <= mn){
                        mn = c;
                        mni = i;
                }
        }


        if(mxi == n-1 || mni == 0)
                cout << mx - mn << '\n';
        else{
                int max_diff = max({a.back() - mn, a[mni-1] - mn,mx - a[mxi+1], mx - a[0]});
                cout << max_diff << '\n';
        }
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
