#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef int64_t int6;
#define all(x) x.begin(),x.end()
#define pb push_back
#define B .back()
#define repl(i,s,n) for (int6 i = s; i < n; i++)
#define repe(i,s,n) for (int6 i = s; i <= n; i++)
void solver(){
        int n,c;
        int6 k;
        cin >> n >> k;

        vector<pair<int,int6>> a(n);

        repl(i,0,n){
                cin >> a[i].first;
        }
        repl(i,0,n){
                cin >> a[i].second;
        }

        sort(all(a),[](pair<int,int6> x,pair<int,int6>y) { return x.second <= y.second;});

        int6 cost = k;
        int6 left = n-1;
        repl(i,0,n){
                int6 ann = left > a[i].first ? a[i].first : left;
                if(a[i].second < k){
                        cost += a[i].second*ann;
                        left -= ann;
                }
                else{
                        cost += left * k;
                        left = 0;
                }
                if(!left)
                        break;
        }
        cout << cost << '\n';

}

int main(){
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       int6 t;
       cin >> t;
       while(t--){
               solver();
       }
}
