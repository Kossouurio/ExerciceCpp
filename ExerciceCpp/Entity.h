
#ifndef ENTITY_H__
#define ENTITY_H__


#include "Vector2.h"


class Entity {
protected:
    Vector2 position;
    
public:
    Entity(float, float); //Constructeur

    // Setter
    virtual void setVector2(float _x, float _y);
    virtual void SetX(float _x);
    virtual void SetY(float _y);
    // Getters
    virtual float getX();
    virtual float getY();
};

#endif
