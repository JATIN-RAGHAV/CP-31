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
        int6 n,k,q,c;
        cin >> n >> k >> q;

        int6 low = 0;
        int6 ans = 0;
        repl(i,0,n){
                cin >> c;
                if( c <= q){
                        low++;
                }else{
                        if(low >= k)
                                ans += (low-k+1)*(low-k+2)/2;
                        low = 0;
                }
        }
        if(low >= k)
                ans += (low-k+1)*(low-k+2)/2;

        cout << ans << '\n';


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
