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
        int6 a,b,dif,rem,moves;
        cin >> a >> b;
        dif = abs(a-b);
        if(dif == 0)
                cout << "0 0\n";
        else{
                rem = a%dif;
                if(rem>(dif/2))
                        moves = dif - rem;
                else
                        moves = rem;
                cout << dif << ' ' << moves << '\n';
        }

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
