#include <iostream>

#include "Factory.h"
#include "Human.h"
#include "Ninja.h"
#include "NinjaFactory.h"
#include "Warrior.h"
#include "WarriorFactory.h"

int main() {
  std::unique_ptr<Factory> warriorFactory = std::make_unique<WarriorFactory>();
  std::unique_ptr<Factory> ninjaFactory = std::make_unique<NinjaFactory>();

  int numFighters{};
  std::cout
      << "How many fighters (warriors and ninjas) should be in the game?\n";
  if (!(std::cin >> numFighters)) {
    throw std::runtime_error("Invalid number of fighters");
  }

  auto warriors = warriorFactory->createHumans(numFighters);
  auto ninjas = ninjaFactory->createHumans(numFighters);

  return 0;
}