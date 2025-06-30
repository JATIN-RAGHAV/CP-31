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
        int n,a,b;
        cin >> n >> a >> b;
        int per = a/(b+1);
        int rem = a%(b+1);
        string p(per+1,'R');
        string r(per,'R');
        repl(i,0,rem)
                cout << p << 'B';
        cout << r;
        repl(i,0,b+1-rem-1)
                cout << 'B' << r;
        cout << '\n';

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
