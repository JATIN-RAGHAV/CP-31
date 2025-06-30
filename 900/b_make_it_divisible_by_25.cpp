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
        string s;
        cin >> s;
        int l0 = 0;
        int l5 = 0;
        int removed = 0;
        int zeros = 0;
        for(int i = s.size()-1; i>=0; i--){
                if(s[i] == '0'){
                        if(l0)
                                break;
                        else
                                l0 = 1;
                        zeros++;
                }
                else if(s[i] == '5'){
                        if(l0)
                                break;
                        else
                                l5 = 1;
                }
                else if((s[i] == '2' || s[i] == '7') && l5)
                        break;
                removed++;
        }
        if(removed != s.size())
                cout << removed - 1 << '\n';
        else
                cout << s.size() - zeros << '\n';
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
