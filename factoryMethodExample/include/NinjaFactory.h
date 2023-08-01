#ifndef NINJAFACTORY_H
#define NINJAFACTORY_H

#include "Factory.h"

class NinjaFactory : public Factory {
  public:
    virtual ~NinjaFactory() {}
    Human *createHuman() override;
};
#endif