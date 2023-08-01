#ifndef FACTORY_H
#define FACTORY_H

#include <memory>
#include <vector>

#include "Human.h"

class Factory {
  public:
    virtual ~Factory(){};
    virtual Human *createHuman() = 0;

    std::vector<std::unique_ptr<Human>> createHumans(int numHumans);
};

#endif /* FACTORY_H */