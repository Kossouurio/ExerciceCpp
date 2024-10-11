#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"

class Mob : public Entity, public Alive, public AMovable
{
public:
    Mob(float x, float y, float maxHealth, const Vector2& direction, float speed);

    void Hit(float damage) override;

    void Move() override;
private:

};
