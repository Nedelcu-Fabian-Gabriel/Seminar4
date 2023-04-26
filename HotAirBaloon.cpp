#include "HotAirBaloon.h"
#include <ostream>

std::vector<ActivityType> HotAirBaloon::suitableActivities() const
{
    return std::vector<ActivityType> {ActivityType::LEISURE};
}

int HotAirBaloon::maximumAltitude() const
{
    return 21;
}

std::ostream& HotAirBaloon::display(std::ostream& os) const
{
	Aircraft::display(os);
	os << ' ' << weightLimit;
	return os;
}

HotAirBaloon::HotAirBaloon(unsigned int id, std::string mod, unsigned int wL)
    : Aircraft{id, mod}, weightLimit{wL}{}
