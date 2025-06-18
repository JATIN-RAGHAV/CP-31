#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solver(){
        int n,k;
        cin >> n >> k;

        string a;
        cin >> a;

        int o = 0;
        vector<int> freq(26,0);

        for(char c : a){
                freq[c-'a']++;
        }

        for(int i = 0; i < 26; i++)
                if(freq[i] % 2 != 0)
                        o++;

        if(k >= o - 1)
                cout << "YES\n";
        else
                cout << "NO\n";

}

int main(){
       int t;
       cin >> t;
       while(t--){
               solver();
       }
}
