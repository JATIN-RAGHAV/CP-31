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

}

int main(){
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       int n,d;
       cin >> n >> d;
       vi a(n);
       repl(i,0,n){
                cin >> a[i];
       }
       sort(all(a));
       int left = 0, right = n-1;
       int count = 0;
       int p;
       while(left <= right){
                p = (d/a[right]) + 1;
                if(left+p-1 <=right){
                        left += p-1;
                        right--;
                        count++;
                }
                else break;
       }
       cout << count << '\n';
}
