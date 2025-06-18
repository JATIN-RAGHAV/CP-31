#include <iostream>
#include <vector>
using namespace std;

void solver(){
        int n,q,l,r,k,c;
        cin >> n >> q;

        vector<int> a;
        cin >> c;
        a.push_back(c%2);
        for(int i = 1; i < n; i++){
                cin >> c;
                c = c % 2;
                a.push_back(c+a.back());
        }

        for(int i = 0; i < q; i++){
                cin >> l >> r >> k;
                int ls,rs;
                if(l == 1)
                        ls = 0;
                else
                        ls = a[l-2];

                if(r == n)
                        rs = 0;
                else
                        rs = a[n-1] - a[r-1];


                if(k % 2){
                        if((r-l+1)%2){
                                if((ls+rs)%2)
                                        cout << "NO\n";
                                else
                                        cout << "YES\n";
                        }
                        else{
                                if((ls+rs)%2)
                                        cout << "YES\n";
                                else
                                        cout << "NO\n";
                        }
                }
                else
                        if((ls+rs)%2)
                                cout << "YES\n";
                        else
                                cout << "NO\n";
        }

}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
