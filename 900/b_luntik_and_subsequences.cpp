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
        int n,c;
        cin >> n;

        int zero=0,one = 0;

        repl(i,0,n){
                cin >> c;
                if(!c)
                        zero++;
                else if(c == 1)
                        one++;
        }
        cout << (int6)(one * (pow(2,zero))) << '\n';
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
