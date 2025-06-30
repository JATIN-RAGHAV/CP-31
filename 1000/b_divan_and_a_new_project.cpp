#include <bits/stdc++.h>
#include <utility>
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
        int n;
        cin >> n;
        vector<pi> a(n,make_pair(0, 0));
        repl(i,0,n){
                cin >> a[i].first;
                a[i].second = i+1;
        }

        sort(all(a),[](pi a, pi b){return a.first > b.first;});
        int6 l,r;
        vi ans(n+1);
        ans[0] = 0;
        l = r = 1;
        int6 cnt = 0;
        repl(i,0,n){
                if(l<r){
                        ans[a[i].second] = -l;
                        cnt += 2*l*a[i].first;
                        l++;
                }
                else{
                        ans[a[i].second] = r;
                        cnt += 2*r*a[i].first;
                        r++;
                }
        }

        cout << cnt << '\n';
        for(auto x:ans){
                cout << x << ' ';
        }
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
