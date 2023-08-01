#ifndef HUMAN_H
#define HUMAN_H

class Human {
  public:
    virtual ~Human(){};
    virtual void attack() = 0;
};

#endif /* HUMAN_H */
