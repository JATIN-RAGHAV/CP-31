#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef int64_t int6;
#define all(x) (x.begin(),x.end());
#define pb push_back
#define repl(i,s,n) for (int i = s; i < n; i++)
#define repe(i,s,n) for (int i = s; i <= n; i++)
void solver(){
        int6 x,n;
        cin >> x >> n;

        if(n){
                if(!(x%2)){
                        x--;
                        x -= 4*((n-1)/4);
                        int rem = (n-1)%4;
                        if(rem == 1){
                                x += n;
                        }else if(rem == 2){
                                x += 2*n - 1;

                        }else if(rem == 3){
                                x += n - 3;
                        }
                }else{
                        x++;
                        x += 4*((n-1)/4);
                        int rem = (n-1)%4;
                        if(rem == 1){
                                x -= n;
                        }else if(rem == 2){
                                x -= 2*n - 1;

                        }else if(rem == 3){
                                x -= n - 3;
                        }
                }
        }
        cout << x << '\n';

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
