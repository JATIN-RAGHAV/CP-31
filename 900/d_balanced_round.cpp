#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solver(){
        int n,k,c,s,op = 0;
        cin >> n >> k;
        s = n;

        vector<int> a;
        while(n--){
                cin >> c;
                a.push_back(c);
        }

        sort(a.begin(),a.end());

        vector<int> br;
        for(int i = 0; i < s-1; i++){
                int d = a[i+1] - a[i];
                if(d > k){
                        br.push_back(i);
                }
        }
        br.push_back(s-1);
        int max = br[0]+1 ;
        for(int i = 0; i<br.size()-1; i++){
                int d = br[i+1] - br[i];
                max = max < d ? d : max;
        }
        cout << s - max << '\n';
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
