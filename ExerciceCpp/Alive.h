#pragma once

class Alive
{
public:
	Alive(float);

	void SetHealth(float _h);

	virtual float GetMaxHealth();
	virtual float GetHealth();
	//For losing health
	virtual void Hit(float _d);

private:
	float maxHealth;
	float health;
};
