#include <bits/stdc++.h>
using namespace std;

void solver(){
        int n,c;
        cin >> n;

        vector<int> a;
        for(int i = 0; i<n; i++){
                cin >> c;
                a.push_back(c);
        }

        for(int i = 0; i < n;i++){
                if(a[i] == 1)
                        a[i]++;
        }

        for(int i = 0; i < n-1; i++){
                if(!(a[i+1]%a[i]))
                        a[i+1]++;
        }
        for(int i : a)
                cout << i << ' ';
        cout << '\n';

}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
