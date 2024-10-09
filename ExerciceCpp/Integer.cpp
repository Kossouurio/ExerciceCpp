#include "Integer.h"
#include <iostream>
#include <ostream>

Integer::Integer(): value(99)
{
}

Integer::Integer(int I): value(I)
{
}

Integer Integer::operator+(const Integer& _rigth)
{
	Integer tmp(this->value + _rigth.value);
	return tmp;
}

Integer Integer::operator+=(const Integer& _rigth)
{
	Integer tmp(this->value += _rigth.value);
	return tmp;
}

Integer Integer::operator-(const Integer& _rigth)
{
	Integer tmp(this->value - _rigth.value);
	return tmp;
}

Integer Integer::operator-=(const Integer& _rigth)
{
	Integer tmp(this->value -= _rigth.value);
	return tmp;
}

Integer Integer::operator*(const Integer& _rigth)
{
	Integer tmp(this->value * _rigth.value);
	return tmp;
}

Integer Integer::operator*=(const Integer& _rigth)
{
	Integer tmp(this->value *= _rigth.value);
	return tmp;
}

Integer Integer::operator/(const Integer& _rigth)
{
	Integer tmp(this->value / _rigth.value);
	return tmp;
}

Integer Integer::operator/=(const Integer& _rigth)
{
	Integer tmp(this->value /= _rigth.value);
	return tmp;
}

Integer Integer::operator%(const Integer& _rigth)
{
	Integer tmp(this->value % _rigth.value);
	return tmp;
}

Integer Integer::operator%=(const Integer& _rigth)
{
	Integer tmp(this->value %= _rigth.value);
	return tmp;
}

Integer Integer::operator<<(const Integer& _rigth)
{
	Integer tmp(this->value << _rigth.value);
	return tmp;
}

void Integer::Pow(int int_exposant)
{
	int iii = value;
	for (int i = 1; i < int_exposant; ++i)
	{
		value *= iii;
	}
}

std::ostream& operator<<(std::ostream& os, const Integer& i)
{
	os << i.value;
	return os;
}