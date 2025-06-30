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
        int n,first_g = -1;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        if(c == 'g')
                cout << "0\n";
        else{
                vi green;
                int ans = 0;

                repl(i,0,n){
                        if(s[i] == 'g'){
                                green.pb(i);
                                if(first_g == -1)
                                        first_g = i;
                        }
                }

                repl(i,0,n){
                        if(s[i] == c){
                                if(!green.empty()){
                                        while(!green.empty() && green[0] < i)
                                                green.erase(green.begin());
                                        if(!green.empty())
                                                ans = max(green[0] - i,ans);
                                        else
                                                ans = max(ans, first_g+n-i);
                                }else
                                        ans = max(ans, first_g+n-i);
                        }
                }
                cout << ans << '\n';
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
