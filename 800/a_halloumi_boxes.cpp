#include <iostream> 
int main(){ 
        int test_count; 
        std::cin >> test_count;
        while(test_count--){ 
                int n,k;
                std::cin >> n >> k;
                if(k > 1){ 
                        std::cout << "YES\n";
                        while(n--)
                                std::cin >> k;
                } else{ 
                        int first, second;
                        std::cin >> first;
                        while(--n){ 
                                std::cin >> second;
                                if(k != -1 && first > second){ 
                                        std::cout << "NO\n";
                                        k = -1;
                                } 
                                first = second;
                        } 
                        if(k != -1) std::cout << "YES\n";
                } 
        } 
}
