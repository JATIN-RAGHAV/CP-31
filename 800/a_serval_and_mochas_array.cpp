#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;
int gcd(int a, int b);

void solver(){
        int n,c,max, min;
        cin >> n;

        vector<int> a;
        while(n--){
                cin >> c;
                a.push_back(c);
        }

        int s = a.size();
        int sgcd = 3;

        for(int i = 0; i < s - 1; i++){
                for(int j = i+1; j < s ; j++){
                        int cgcd = gcd(a[i], a[j]);
                        sgcd = cgcd < sgcd ? cgcd : sgcd;
                }
        }

        if(sgcd <= 2)
                cout << "Yes\n";
        else
                cout << "No\n";

}

int gcd(int a, int b){
        if(b == 0)
                return a;
        return gcd(b, a % b);
}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
