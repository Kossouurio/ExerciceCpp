
#include "Vector2.h"

Vector2::Vector2(float _x, float _y) : x(_x), y(_y) {

}

void Vector2::setVector2(float _x, float _y)
{
	x = _x;
	y = _y;
}

void Vector2::SetX(float _x)
{
	x = _x;
}

void Vector2::SetY(float _y)
{
	y = _y;
}

float Vector2::getX()
{
	return x;
}

float Vector2::getY()
{
	return y;
}


