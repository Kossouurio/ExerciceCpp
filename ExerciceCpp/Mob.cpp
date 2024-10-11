#include "Mob.h"
#include <iostream>

Mob::Mob(float x, float y, float maxLife, const Vector2& direction, float speed)
    : Entity(x, y), Alive(maxLife), AMovable(direction, speed) {
    std::cout << "Mob just created at x = " << x
        << " and y = " << y << " with " << GetMaxHealth() << " life"
        << " with direction x = " << direction.GetX()
        << " and y = " << direction.GetY() << std::endl;
}

void Mob::Hit(float damage)
{
    Alive::Hit(damage);
    if (GetHealth() <= 0) {
        std::cout << "Mob just die" << std::endl;
    }
}

void Mob::Move()
{

}
