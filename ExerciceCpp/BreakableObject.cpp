#include "BreakableObject.h"
#include <iostream>

BreakableObject::BreakableObject(float x, float y, float maxHealth) : Entity(x, y), Alive(maxHealth) {
    std::cout << "Breakable Object just created at x = " << x
        << " and y = " << y << " with " << maxHealth << " life" << std::endl;
}

void BreakableObject::Hit(float damage) {
    Alive::Hit(damage);
    if (GetHealth() <= 0) {
        std::cout << "Breakable Object just broke" << std::endl;
    }
}
