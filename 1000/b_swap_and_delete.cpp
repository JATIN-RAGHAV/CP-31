#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef int64_t int6;
#define all(x) (x.begin(),x.end());
#define pb push_back
#define B .back()
#define repl(i,s,n) for (int i = s; i < n; i++)
#define repe(i,s,n) for (int i = s; i <= n; i++)
void solver(){
        string s;
        cin >> s;
        int z = 0,o = 0;
        for(auto c : s){
                if(c == '0')
                        z++;
                else
                        o++;
        }
        int ans = 0;
        repl(i,0,s.size()){
                if(s[i] == '0' && o)
                        o--;
                else if(s[i] == '1' && z)
                        z--;
                else{
                        ans = s.size() - i;
                        break;
                }
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
