#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

int gcdf(int a, int b);
void solver(){
        int n,c,gcd;
        cin >> n;

        vector<int> a;
 
        for(int i = 1; i <= n; i++){
                cin >> c;
                int dis = abs(c - i);
                if(dis)
                        a.push_back(dis);
        }

        gcd = gcdf(a[0],a[1]);
        for(int i = 1; i < a.size(); i++){
                int h = gcdf(a[i],gcd);
                gcd = h < gcd ? h : gcd;
        }

        cout << gcd << '\n';
}

int gcdf(int a, int b){
        int ans = min(a,b);
        while(a % ans || b % ans)
                ans--;
        return ans;
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
