#pragma once
#include <string>
#include <vector>

enum class ActivityType
{
	MEDICAL_EMERGENCY,
	MILITARY,
	PUBLIC_TRANSPORTATION,
	LEISURE
};

class Aircraft
{
protected:
	unsigned int identifier;
	std::string model;

public:
	inline int getId() const {return identifier;}
	inline std::string getModel() const {return model;}
	virtual std::vector<ActivityType> suitableActivities() const = 0;
	virtual int maximumAltitude() const = 0;
	virtual std::ostream& display(std::ostream& os) const;

	friend std::ostream& operator<<(std::ostream& os, const Aircraft& craft);

	Aircraft(unsigned int id, std::string mod);
};

