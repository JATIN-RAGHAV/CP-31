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
        int6 n,k,b,s;
        cin >> n >> k >> b >> s;
        int6 first = k*b;
        int6 remaining = s - first;
        if(first+n*(k-1) < s || s < first){
                cout << "-1\n";
        }
        else{
                if(remaining>=k-1){
                        first += k-1;
                        remaining -= k-1;
                }
                else{
                        first += remaining;
                        remaining = 0;
                }
                cout << first << '\n';
                while(--n){
                        if(remaining >= k-1){
                                cout << k-1 << ' ';
                                remaining -= k-1;
                        }else if(remaining){
                                cout << remaining << ' ';
                                remaining = 0;
                        }else{
                                cout << "0 ";
                        }
                }
                cout << '\n';
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
