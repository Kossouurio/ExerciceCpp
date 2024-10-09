#pragma once
#include "Vector2.h"

class AMovable
{
protected:
	Vector2 vu;
	float v;

public:
	AMovable(Vector2 _vu, float _v);
	
	virtual void setVector2(float _x, float _y);
	virtual void SetSpeed(float _v);
	virtual void Move();


private:

};
