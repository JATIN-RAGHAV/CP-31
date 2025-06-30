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
        int6 n,k,c,mid = 0;
        cin >> n >> k;
        int mid_pos = (n+1)/2;
        int ignore = (mid_pos-1)*k;
        int skip = n - mid_pos + 1;

        repe(i,1,n*k){
                cin >> c;
                if(i>ignore){
                        if(!((i-1-ignore)%skip))
                                mid += c;
                }
        }
         
        cout << mid << '\n';

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
