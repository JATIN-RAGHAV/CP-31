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
        int6 n;
        cin >> n;

        int tos = 0, tres = 0;
        while(true){
                if(!(n%2)){
                        tos++;
                        n /= 2;
                }else
                        break;
        }
        while(true){
                if(!(n%3)){
                        tres++;
                        n /= 3;
                }
                else
                        break;
        }
        if(n==1 && tres >= tos){
                cout << 2*tres - tos << '\n';
        }else
                cout << "-1\n";

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
