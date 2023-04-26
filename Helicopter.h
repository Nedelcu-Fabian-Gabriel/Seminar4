#pragma once
#include "Aircraft.h"
class Helicopter : public Aircraft
{
	bool isPrivate;
public:
	virtual std::vector<ActivityType> suitableActivities() const override;
	virtual int maximumAltitude() const override;
	std::ostream& display(std::ostream& os) const override;

	Helicopter(unsigned int id, std::string mod, bool p);
};

