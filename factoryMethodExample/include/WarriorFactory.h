#ifndef WARRIORFACTORY_H
#define WARRIORFACTORY_H

#include "Factory.h"

class WarriorFactory : public Factory {
  public:
    virtual ~WarriorFactory() {}
    Human *createHuman() override;
};
#endif