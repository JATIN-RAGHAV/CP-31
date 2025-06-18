#include "bits/stdc++.h"
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;
#define PB push_back
#define B back
#define REP(i,s,n) for (int i = s; i < n; i++)

void solver(){
        int n,m;
        cin >> n >> m;
        vector<vi> a(n,vi(m));

        int max = 0;
        vector<pair<int, int>>  mm;
        for(int i = 0; i < n; i++){
                for(int j = 0; j < m ;j++){
                        cin >> a[i][j];
                        max = max < a[i][j] ? a[i][j] : max;
                }
        }

        for(int i = 0; i < n; i++){
                for(int j = 0; j < m ;j++){
                        if(a[i][j] == max){
                                mm.PB(make_pair(i,j));
                        }
                }
        }

        bool sol = false;
        if(mm.size() >= 3){
                int r1,c1,r2,c2,r3,c3;
                r1 = mm[0].first;
                c1 = mm[0].second;
                r2 = mm[1].first;
                c2 = mm[1].second;
                r3 = mm[2].first;
                c3 = mm[2].second;

                int rr,cc;
                if((r1 - r3 == 0) || (c2 - c3 == 0)){
                        rr = r1;
                        cc = c2;
                }else if((r2 - r3 == 0) || (c1 - c3 == 0)){
                        rr = r2;
                        cc = c1;
                }else{
                        rr = -1;
                }

                if(rr != -1){
                        for(int i = 3; i < mm.size(); i++){
                                if((rr - mm[i].first != 0) && (cc - mm[i].second != 0)){
                                        cout << max << '\n';
                                        sol = true;
                                        break;
                                }
                        }
                }else{
                        cout << max << '\n';
                        sol = true;
                }

        }
        if(!sol)
                cout << max - 1 << '\n';

}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
