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

int max_c(vi a, int x){
        int count,mx;
        count = mx = 0;
        repl(i,0,a.size()){
                if(a[i] == x)
                        count++;
                else{
                        mx = max(count, mx);
                        count = 0;
                }
        }
        mx = max(count,mx);
        return mx;
}

void solver(){
        int n,c;
        cin >> n;
        vi a(n),b(n);
        for(auto &x : a)
                cin >> x;
        for(auto &x : b)
                cin >> x;

        int ans = 0;
        repe(i,1,2*n){
                ans = max(max_c(a,i)+max_c(b,i),ans);
                if(ans >= n) break;
        }
        cout << ans <<  '\n';
        
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
