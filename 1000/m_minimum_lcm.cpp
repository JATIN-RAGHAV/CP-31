#include <bits/stdc++.h>
#include <ios>
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
pi get_fact(int n);

void solver(){
        int n;
        cin >> n;
        pi ans = get_fact(n);
        cout << ans.first << ' ' << ans.second << '\n';
}

pi get_fact(int n){
        int max_f,oth_f;
        max_f = 1;
        repe(i,2,sqrt(n)){
                if(!(n%i)){
                        oth_f = n / i;
                        max_f = max({oth_f,max_f,i});
                }
        }
        int times = n/max_f;
        int a,b;
        a = b = -1;
        if(max_f == 1){
                a = 1;
                b = n - 1;
        }else{
                if(!(times%2)){
                        a = b = max_f*(times/2);
                }
        }
        if(a!=-1){
                return make_pair(a,b);
        }
        pi ans = get_fact(times);
        return make_pair(ans.first*max_f,ans.second*max_f);
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
