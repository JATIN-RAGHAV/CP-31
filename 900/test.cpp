#include <iostream>
using namespace std;

void solver(){
        int n;
        cin>>n;
        vector<int>a(n);
        int p;
        for(int i=0;i<n;i++){
                cin>>a[i];
                if(!a[i])p=i+1;
        }
        if(!(n%2)){
                cout<<2<<endl;
                cout<<1<<' '<<n<<endl;
                cout<<1<<' '<<n<<endl;
        }
        else{
                cout<<4<<endl;
                if(p==1){
                        cout<<2<<' '<<n<<endl;
                        cout<<2<<' '<<n<<endl;
                        cout<<2<<' '<<n<<endl;
                        cout<<2<<' '<<n<<endl;

                }
                else if(p==n){
                        cout<<1<<' '<<n-1<<endl;
                        cout<<1<<' '<<n-1<<endl;
                        cout<<1<<' '<<n-1<<endl;
                        cout<<1<<' '<<n-1<<endl;

                }
                else{
                        cout<<1<<" "<<p-1<<endl;
                        cout<<1<<" "<<p-1<<endl;
                        cout<<p+1<<" "<<n<<endl;
                        cout<<p+1<<" "<<n<<endl;
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
