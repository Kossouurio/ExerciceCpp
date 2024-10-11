
#include <iostream>
#include "Entity.h"

Entity::Entity(float _x, float _y) : position(_x, _y) {

}

void Entity::setVector2(float _x, float _y)
{
	this->SetX(_x);
	this->SetY(_y);
}

void Entity::SetX(float _x)
{
	this->SetX(_x);
}

void Entity::SetY(float _y)
{
	this->SetY(_y);
}

float Entity::getX()
{
	return this->getX();
}

float Entity::getY()
{
	return this->getY();
}
