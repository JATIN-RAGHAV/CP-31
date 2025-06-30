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
        int n;
        cin >> n;
        int c = 1,cnt = -1;
        while(c < n){
                cnt++;
                c *= 2;
        }
        repl(i,1,pow(2,cnt))
                cout << i << ' ';
        cout << "0 ";
        repl(i,pow(2,cnt),n)
                cout << i << ' ';
        cout << '\n';

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
