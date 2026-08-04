#include <iostream>
//collatz conjecture simulator

int main(){
    int n;
    std::cout << "Input any integer: ";
    std::cin >> n;
    while (n>=1){
        if (n%2){
            n = n*3 + 1;
            std::cout << n << std::endl;
        } else {
            n = n/2;
            std::cout << n << std::endl;
        }
    }
    return 0;
}