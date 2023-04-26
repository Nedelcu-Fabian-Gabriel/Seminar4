#include "Helicopter.h"
#include <ostream>

std::vector<ActivityType> Helicopter::suitableActivities() const
{
	std::vector<ActivityType> activities{ ActivityType::MEDICAL_EMERGENCY, ActivityType::MILITARY, ActivityType::PUBLIC_TRANSPORTATION };
	if (isPrivate)
		activities.emplace_back(ActivityType::LEISURE);
	return activities;
}

int Helicopter::maximumAltitude() const
{
	return 12;
}

std::ostream& Helicopter::display(std::ostream& os) const
{
	Aircraft::display(os);
	os << ' ' << isPrivate ? "private" : "public";
	return os;
}

Helicopter::Helicopter(unsigned int id, std::string mod, bool p)
	: Aircraft{ id, mod }, isPrivate{p}{}
