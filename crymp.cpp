#include <iostream>
using std::string;

bool lock1();
bool lock2();
bool lock3();

int main(){
    if(!lock1()) return 0;
    if(!lock2()) return 0;
    if(!lock3()) return 0;

    std::cout<<"A WINNER IS YOU." << std::endl;
    return 0;
}

bool lock1(){
    int p1, p2;
    std::cout<<"221" << std::endl;
    std::cout<<"Enter prime factors to unlock: ";
    std::cin >> p1 >> p2;

    if((p1==13 && p2==17) || (p1==17 && p2==13)){
        std::cout<<"UNLOCKED." << std::endl;
        return true;
    } else {
        std::cout<<"GAME OVER." << std::endl;
        return false;
    }
}

bool lock2(){
    int p1, p2;
    std::cout<<"437"<<std::endl;
    std::cout<<"Enter prime factors to unlock: ";
    std::cin>>p1>>p2;

    if((p1==23 && p2==19) || (p1==19 && p2==23)){
        std::cout<<"UNLOCKED." << std::endl;
        return true;
    } else {
        std::cout<<"GAME OVER." << std::endl;
        return false;
    }
}

bool lock3(){
    int p1, p2;
    std::cout<<"7747"<<std::endl;
    std::cout<<"Enter prime factors to unlock: ";
    std::cin>>p1>>p2;

    if((p1==127 && p2==61) || (p1==61 && p2==127)){
        std::cout<<"UNLOCKED." << std::endl;
        return true;
    } else {
        std::cout<<"GAME OVER." << std::endl;
        return false;
    }
}