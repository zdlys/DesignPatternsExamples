#include "Factory.h"

std::vector<std::unique_ptr<Human>>
Factory::createHumans(int numHumans) {
    std::vector<std::unique_ptr<Human>> humans;
    for (int i = 0; i < numHumans; ++i) {
        std::unique_ptr<Human> temp(createHuman());
        humans.push_back(std::move(temp));
    }
    return humans;
}