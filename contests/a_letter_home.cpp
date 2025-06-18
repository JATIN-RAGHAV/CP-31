#include "vector"
#include "iostream"
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;
#define PB push_back
#define B back
#define REP(i,s,n) for (int i = s; i < n; i++)

void solver(){
        int n,s,c,min,max;
        cin >> n >> s;
        vi a;

        cin >> c;
        min = max = c;
        REP(i,1,n){
                cin >> c;
                min = c < min ? c : min;
                max = c > max ? c : max;
        }
        
        int d1 = abs(s - max);
        int d2 = abs(s - min);
        int an = 0;

        if(min < s && s < max){
                if(d2 < d1){
                        if(min != max){
                                an += 2*d2;
                                an += d1;
                        }
                }else{
                        an += 2*d1;
                        an += d2;
                }
        }else{
                an = d1 > d2 ? d1 : d2;
        }

         cout << an << '\n';

}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
