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
        int6 n,x,c;
        cin >> n >> x;
        int6 l,u,count = 0;
        cin >> c;
        l = c-2*x;
        u = c+2*x;
        repl(i,1,n){
                cin >> c;
                if(c > u || c < l){
                        count++;
                        l = c-2*x;
                        u = c+2*x;
                }
                else{
                        l = max(l, c-2*x);
                        u = min(u, c+2*x);
                }
        }
        cout << count << '\n';
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
