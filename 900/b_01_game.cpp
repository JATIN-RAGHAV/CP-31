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
        cout <<(((s.size()-abs(z-o))/2)%2 ? "DA" : "NET") << '\n';
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
