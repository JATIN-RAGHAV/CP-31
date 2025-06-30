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
        int n, c,p = 1;
        cin >> n;
        vi a;
        int cnt = 1,l;
        cin >> l;
        repl(i,1,n){
                cin >> c;
                if(p){
                        if(c == l){
                                cnt++;
                        }
                        else{
                                a.pb(cnt);
                                if(cnt == 1)
                                        p = 0;
                                cnt = 1;
                        }
                        l = c;
                }
        }
        a.pb(cnt);
        p = cnt > 1;
        if(p){
                int curr = 1;
                for(auto x : a){
                        repl(i,1,x){
                                cout << curr + i << ' ';
                        }
                        cout << curr << ' ';
                        curr += x;
                }
                cout << '\n';
        }
        else
                cout << "-1\n";
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
