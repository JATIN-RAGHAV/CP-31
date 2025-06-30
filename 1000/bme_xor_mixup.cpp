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
        int a,b;
        cin >> a >> b;
        int rem = (a-1)%4;
        int cxor;
        if(rem == 0)
                cxor = a-1;
        else if(rem == 1)
                cxor = 1;
        else if(rem == 2)
                cxor = a;
        else
                cxor = 0;

        int t = cxor^b;
        if(cxor == b)
                cout << a << '\n';
        else if(t!=a)
                cout << a+1 << '\n';
        else
                cout << a+2 << '\n';
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
