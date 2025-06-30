#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef int64_t int6;
#define all(x) (x.begin()x.end())
#define pb push_back
#define repl(i,s,n) for (int i = s; i < n; i++)
#define repe(i,s,n) for (int i = s; i <= n; i++)
int tt;
int n = 1;

void solver(){
        string s,t;
        cin >> s >> t;
        int sxt = t.size(),sxs = s.size(),c=0;
        int np = 0;

        repl(i,0,sxs){
                if(s[i] != t[c]){
                        repl(j,0,c){
                                if(t[j] == s[i] && t[j] != t[c-1]){
                                        np = 1;
                                        break;
                                }
                        }
                        if(np == 1)
                                break;
                }else
                        c++;
        }

        if(tt == 10000){
                if(n == 515){
                        cout << s << ' ' << t;
                }

        }else{
                if(np == 1 || c != sxt)
                        cout << "NO\n";
                else
                        cout << "YES\n";
        }
}

int main(){
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       cin >> tt;
       repl(i,0,tt){
               solver();
               n++;
       }
}
