#include <iostream>

void solver(){
        int n,x,c,l = 0,max = 0;
        std::cin >> n >> x;

        while(n--){
                std::cin >> c;
                max = c - l > max ? c - l : max;
                l = c;
        }
        max = 2*(x-c) > max ? 2*(x-c) : max;
        std::cout << max << '\n';
}

int main(){
        int t;
        std::cin >> t;
        while(t--){
                solver();
        }
}
