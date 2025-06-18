#include <iostream>
#include <vector>
using namespace std;

void solver(){
        int n,c,s;
        cin >> n;
        s = n;
        vector<int> a;

        while(n--){
                cin >> c;
                a.push_back(c);
        }

        if(a[0] != a[s-1]){
                cout << "Yes\n";
                cout << a[s-1] << ' ';
                for(int i = 0; i < s-1; i++)
                        cout << a[i] << ' ';
                cout << '\n';
        }else
                cout << "No\n";
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
