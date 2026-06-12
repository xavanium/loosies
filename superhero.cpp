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

};
int main() {
    string name, power;
    int age;
    user_hero hero;
    std::cout<<"What is your superhero name? ";
    std::cin >> name;
    std::cout << "What superpower do you have? ";
    std::cin >> power;
    std::cout << "How old are you? ";
    std::cin >> age;
    hero.heroName = name;
    hero.superpower = power;
    hero.age = age;
    hero.hero_chart();
}