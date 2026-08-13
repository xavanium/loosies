#include <iostream>
//collatz conjecture simulator

int main(){
    long int i;
    std::cout << "Input any integer: ";
    std::cin >> i;
    while (i!=1){
        if (i%2){
            i = i*3 + 1;
            std::cout << i << std::endl;
        } else {
            i = i/2;
            std::cout << i << std::endl;
        }
    }
    return 0;
}