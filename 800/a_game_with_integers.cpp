#include <iostream>
using namespace std;

void solver(){
        int n,rem;
        cin >> n;
        rem = n % 3;
        if(rem == 0)
                cout << "Second\n";
        else if(rem == 1)
                cout << "First\n";
        else
                cout << "First\n";
}

int main(){
        int t;
        cin >> t;
        while(t--){
                solver();
        }
}
