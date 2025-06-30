#include <bits/stdc++.h>
#include <cmath>
#include <unordered_map>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef int64_t int6;
#define all(x) (x.begin(),x.end());
#define pb push_back
#define repl(i,s,n) for (int i = s; i < n; i++)
#define repe(i,s,n) for (int i = s; i <= n; i++)
void solver(){
        int n,mx = 0,c;
        cin >> n;

        unordered_map<int, int> mp;

        repl(i,0,n){
                cin >> c;
                if(mp.count(c))
                        mp[c]++;
                else
                        mp[c] = 1;
                mx = max(mx,mp[c]);
        }

        if(mx == n){
                cout << "0\n";
        }else{
                int swaps = n - mx;
                int cpy = 0;
                while(mx<n){
                        cpy++;
                        mx *= 2;
                }
                cout << cpy+swaps << '\n';
        }

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
