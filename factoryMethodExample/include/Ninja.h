#ifndef NINJA_H
#define NINJA_H

#include "Human.h"

class Ninja : public Human {
  public:
    Ninja();
    virtual ~Ninja();
    void attack() override;
};

#endif /* NINJA_H */
