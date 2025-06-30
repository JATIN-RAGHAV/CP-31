#include <algorithm>
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
int find_max();
void solver(){
        int6 w,h;
        cin >> w >> h;
        int6 mxx = max(find_max(),find_max());
        int6 mxy = max(find_max(),find_max());
        cout << max(mxx*h,mxy*w) << '\n';
}

int find_max(){
        int6 k;
        int6 mn,mx;
        cin >> k;
        cin >> mn;
        while(--k)
                cin >> mx;
        return mx - mn;
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
