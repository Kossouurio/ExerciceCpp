#pragma once
#include "Alive.h"

class IAttacker
{
public:

	virtual void Damage(Alive& target) = 0;

private:

};
