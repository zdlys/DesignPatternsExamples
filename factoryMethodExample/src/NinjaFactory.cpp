#include "NinjaFactory.h"
#include "Ninja.h"

Human *
NinjaFactory::createHuman() {
    return new Ninja();
}
