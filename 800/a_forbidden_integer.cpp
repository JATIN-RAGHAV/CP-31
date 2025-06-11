#include <iostream>
using namespace std;

void solver(){
        int x,k,n;
        cin >> n >> k >> x;
        if(x != 1){
                cout << "YES\n";
                cout << n << '\n';
                while(n--)
                        cout << "1 ";
                cout << '\n';
        }else{
                if(k == 1){
                        cout << "NO\n";
                }
                else if(k == 2){
                        if(n % 2 == 0){
                                cout << "YES\n";
                                cout << n / 2 << '\n';
                                while(n){
                                        cout << "2 ";
                                        n -= 2;
                                }
                                cout << '\n';
                        }
                        else{
                                cout << "NO\n";
                        }
                }
                else{
                        if(n % 2 == 0){
                                cout << "YES\n";
                                cout << n / 2 << '\n';
                                while(n){
                                        cout << "2 ";
                                        n -= 2;
                                }
                                cout << '\n';
                        }else{
                                cout << "YES\n";
                                n -= 3;
                                int l = 1;
                                l += n / 2;
                                cout << l << '\n';
                                cout << "3 ";
                                while(n){
                                        cout << "2 ";
                                        n -= 2;
                                }
                                cout << '\n';
                        }
                }
        }
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
