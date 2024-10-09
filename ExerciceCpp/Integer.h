#pragma once
#include <ostream>

class Integer
{
private:


public:
	Integer();
	Integer(int I);
	int value;

	Integer operator+(const Integer& _rigth);
	Integer operator+=(const Integer& _rigth);
	
	Integer operator-(const Integer& _rigth);
	Integer operator-=(const Integer& _rigth);

	Integer operator*(const Integer& _rigth);
	Integer operator*=(const Integer& _rigth);

	Integer operator/(const Integer& _rigth);
	Integer operator/=(const Integer& _rigth);

	Integer operator%(const Integer& _rigth);
	Integer operator%=(const Integer& _rigth);
	
	Integer operator<<(const Integer& _rigth);
	
	void Pow(int int_exposant);

	//std::string operator()() {}
	friend std::ostream& operator<<(std::ostream& os, const Integer& itn);

};
