#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef int64_t int6;
#define pb push_back
#define repl(i,s,n) for (int i = s; i < n; i++)
#define repe(i,s,n) for (int i = s; i <= n; i++)

void solver(){
        int6 n;
        cin >> n;

        if(n % 2 || n == 2)
                cout << "-1\n";
        else{
                int6 mx = n/4;
                int6 mn = ceil((double)n/6);
                cout << mn << ' ' << mx << '\n';
        }

}

int main(){
       ios::sync_with_stdio(0);
       cin.tie(0);
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
