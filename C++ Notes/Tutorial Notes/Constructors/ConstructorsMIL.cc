#include <iostream>
using namespace std;

// difference between MIL or the method below at line 15
struct Monster {
    const string name;
    int health;
    void takeDamage(int damage);
    void printMonster();
    //    Student (int assns, int mt, int final, int id) : assns{assns}, mt{mt}, final{final},id{id} {}
    Monster() : name{"Not given"}, health{100} {}
    Monster(const string name, int health) : name{name}, health{health} {}
};
/*
Monster :: Monster (string name, int health = 100) { // default value for health is 100 but can change by user input
    this->name = name;
    this->health = health;
}
Monster::Monster() {
    this->name = "Not Given";
    this->health = 100;
}
*/

void Monster::takeDamage(int damage) {
    this ->health -= damage; // this health refers to Monster.health
}
void printMonster (const Monster &m){
    cout << "name: " << m.name << "\nhealth: " << m.health <<endl;
}

int main () {
    Monster m = {};
    m.takeDamage(50);
    printMonster(m);
    return 0;
}