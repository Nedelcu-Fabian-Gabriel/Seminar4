#pragma once
#include "Aircraft.h"
class HotAirBaloon : public Aircraft
{
	unsigned int weightLimit; //kg
public:
	virtual std::vector<ActivityType> suitableActivities() const override;
	virtual int maximumAltitude() const override;
	std::ostream& display(std::ostream& os) const override;
	HotAirBaloon(unsigned int id, std::string mod, unsigned int wL);
};

