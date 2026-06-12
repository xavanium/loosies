//simple oop practice

#include <iostream>
using std::string;
class user_hero {
    public:
        string heroName;
        string superpower;
        int age;

        void hero_chart(){
            std::cout << "NAME: " << heroName << std::endl;
            std::cout << "POWER: " << superpower << std::endl;
            std::cout << "AGE: " << age << " YEARS OLD" << std::endl;
        }
        user_hero(string name, string power, int age){
            heroName = name;
            superpower = power;
            this->age = age;
        }
};
int main() {
    string name, power;
    int age;
    std::cout<<"What is your superhero name? ";
    std::cin >> name;
    std::cout << "What superpower do you have? ";
    std::cin >> power;
    std::cout << "How old are you? ";
    std::cin >> age;
    user_hero hero = user_hero(name, power, age);
    hero.hero_chart();
}