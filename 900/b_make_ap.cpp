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
        int a,b,c;
        cin >> a >> b >> c;
        bool done = a-b == b-c ? true : false;
        if(a-b != b-c){
                // 1  1   4
                float x = (float)(2*b - c)/a;
                if(!fmod(x,1.0) && x>0)
                        done = true;
                x = (float)(a+c)/(2*b);
                if(!fmod(x,1.0) && x>0)
                        done = true;
                x = (float)((2*b)-a)/c;
                if(!fmod(x,1.0) && x>0)
                        done = true;
        }else
                done = true;

        if(done)
                cout << "YES\n";
        else
                cout << "NO\n";

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
