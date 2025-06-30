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
void solver(){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int map[26] = {0};
        vi left,right;

        repl(i,0,n){
                if(!map[s[i]-'a']){
                        map[s[i]-'a']++;
                        left.pb(i);
                }
        }
        int mapp[26] = {0};
        for(int i = n-1; i>=0;i--){
                if(!mapp[s[i]-'a']){
                        mapp[s[i]-'a']++;
                        right.insert(right.begin(),i);
                }
        }
        int i_left,i_right;
        i_left = i_right = 0;
        int count = 0;
        int max_count = 0;
        while(i_left < left.size() && i_right < left.size()){
                if(left[i_left] < right[i_right]){
                        count++;
                        i_left++;
                }
                else{
                        count--;
                        i_right++;
                }
                max_count = max(max_count,count);
        }
        cout << max_count << '\n';
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
