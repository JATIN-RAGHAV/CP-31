#include <bits/stdc++.h>
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

class Comparator{
        public:
                bool operator()(pi a, pi b){
                        if(a.first < b.first)
                                return true;
                        if(a.first == b.first)
                                return a.second > b.second;
                        return false;
                }
};

void solver(){
        int n,k;
        cin >> n >> k;

        vi a(n);
        for(auto &x : a){
                cin >> x;
                x = x%k;
                if(!x) x = k;
        }

        vi ans(n);
        iota(all(ans),0);
        stable_sort(all(ans),[a](int i, int j){
                return a[i] > a[j];
        });

        for(auto &x : ans){
                cout << x+1 << ' ';
        }
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
