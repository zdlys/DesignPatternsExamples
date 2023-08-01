#include "Ninja.h"

#include <iostream>

Ninja::Ninja() {
    std::cout << "Ninja is ready to fight!" << std::endl;
}

Ninja::~Ninja() {
    std::cout << "Ninja is dead!" << std::endl;
}

void Ninja::attack() {
    std::cout << "Ninja attacks!" << std::endl;
}