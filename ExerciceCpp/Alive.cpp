#include "Alive.h"

Alive::Alive(float _maxHealth): maxHealth(_maxHealth), health(_maxHealth)
{
}

void Alive::SetHealth(float _h)
{
	maxHealth = _h;
	health = _h;
}

float Alive::GetMaxHealth()
{
	return maxHealth;
}

float Alive::GetHealth()
{
	return health;
}

void Alive::Hit(float _d)
{
	health -= _d;
}

