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
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int curr,mx,l,r;
        curr = mx = 0;
        l = 0;
        r = k-1;
        repl(i,0,k){
                if(s[i] == 'B')
                        curr++;
        }
        mx = curr;
        while(r<n-1){
               r++;
               l++;
               curr += s[r] == 'B' ? 1 : 0;
               curr += s[l-1] == 'B' ? -1 : 0;
               mx = max(curr,mx);
        }
        cout << k-mx << '\n';
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
