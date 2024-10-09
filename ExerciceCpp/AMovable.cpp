#include "AMovable.h"

AMovable::AMovable(Vector2 _vu, float _v) : vu(_vu), v(_v)
{
}

void AMovable::setVector2(float _x, float _y)
{
	vu.SetX(_x);
	vu.SetY(_y);
}

void AMovable::SetSpeed(float _v)
{
	v = _v;
}
