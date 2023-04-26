#include "Aircraft.h"
#include <ostream>

std::ostream& Aircraft::display(std::ostream& os) const
{
	os << identifier << ' ' << model;
	return os;
}

Aircraft::Aircraft(unsigned int id, std::string mod)
	: identifier(id), model(mod){}

std::ostream& operator<<(std::ostream& os, const Aircraft& craft)
{
	craft.display(os);
	return os;
}
