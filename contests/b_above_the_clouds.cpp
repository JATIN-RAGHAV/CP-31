#include "vector"
#include "iostream"
#include <string>
using namespace std;

void solver(){
        int n;
        cin >> n;

        string s;
        cin >> s;

        if(n >= 3){
                for(int i = 0; i < n-1 ;i++){
                        for(int j = i+1; j<n;j++){
                                if(!(i==0 && j==(n-1)) && s[i] == s[j]){
                                        cout << "Yes\n";
                                        return;
                                }
                        }
                }
        }
        cout << "No\n";
}

typedef vector<int> vi;
typedef pair<int, int> pi;
#define PB push_back
#define B back
#define REP(i,s,n) for (int i = s; i < n; i++)
int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
