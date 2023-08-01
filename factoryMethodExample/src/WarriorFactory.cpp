#include "WarriorFactory.h"
#include "Warrior.h"

Human *
WarriorFactory::createHuman() {
    return new Warrior();
}