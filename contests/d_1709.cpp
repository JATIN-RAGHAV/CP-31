#include "iostream"
#include "vector"
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;
#define PB push_back
#define B back
#define REP(i,s,n) for (int i = s; i < n; i++)

void solver(){
        int n,c;
        cin >> n;

        vi a(n),b(n);
        vi ans;
        for(int i = 0; i<n ;i++){
                cin >> c;
                if(c > n)
                        ans.PB(i+1);
        }
        for(int i = 0; i<n ;i++){
                if(c <= n)
                        ans.PB(i+1);
        }



}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
