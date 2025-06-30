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
         int n,k,c,ans = 0;
         cin >> n >> k;
         ans = k;
         if(k == 4){
                 int tos = 0;
                 repl(i,0,n){
                         cin >> c;
                         if(!(c%2))
                                 tos++;
                         if(!(c%4))
                                 tos += 2;
                         if(c%4 == 3)
                                 ans = 1;
                 }
                 if(tos >= 2)
                         ans = 0;
                 else if(tos == 1)
                         ans = 1;
                 else
                         ans = ans == 1 ? 1 : 2;
         }
         else{
                 repl(i,0,n){
                         cin >> c;
                         ans = min(c%k ? (k - (c%k)) : 0,ans);
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
