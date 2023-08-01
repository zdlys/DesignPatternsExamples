#include "Warrior.h"
#include <iostream>

Warrior::Warrior() {
    std::cout << "Warrior is ready to fight!" << std::endl;
}

Warrior::~Warrior() {
    std::cout << "Warrior is dead!" << std::endl;
}

void Warrior::attack() {
    std::cout << "Warrior attacks!" << std::endl;
}