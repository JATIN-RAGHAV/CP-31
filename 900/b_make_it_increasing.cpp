#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define pb push_back
#define repl(i,s,n) for (int i = s; i < n; i++)
#define repe(i,s,n) for (int i = s; i <= n; i++)

void solver(){
        int n,c,cnt = 0;
        cin >> n;

        vi a(n);
        repl(i,0,n){
                cin >> a[i];
        }
        bool done = false;

        for(int i = n-2; i >= 0; i--){
                while(a[i] >= a[i+1]){
                        if(a[i+1] == 0){
                                cnt = -1;
                                done = true;
                                break;
                        }
                        a[i] = a[i]/2;
                        cnt++;
                }
                if(done)
                        break;
        }
        cout << cnt << '\n';

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
