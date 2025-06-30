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
        int n,x,c;
        cin >> n;
        pi mn_f(INT_MAX,0),mn_s(INT_MAX,0);

        vector<pi> a(n,make_pair(INT_MAX,INT_MAX));

        repl(i,0,n){
                cin >> x;
                repl(j,0,x){
                        cin >> c;
                        if(c < a[i].first){
                                a[i].second = a[i].first;
                                a[i].first = c;
                        }else if(c < a[i].second)
                                a[i].second = c;
                }
                if(mn_f.first > a[i].first){
                        mn_f.first = a[i].first;
                        mn_f.second = i;
                }
                if(mn_s.first > a[i].second){
                        mn_s.first = a[i].second;
                        mn_s.second = i;
                }
        }

        int6 ans = mn_f.first;

        repl(i,0,n){
                if(i != mn_s.second)
                        ans += a[i].second;
        }

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
