#include "Aircraft.h"
#include "Helicopter.h"
#include "HotAirBaloon.h"
#include <deque>
#include <iostream>
#include <algorithm>

int main()
{
	std::deque<Aircraft*> aircrafts{};

	aircrafts.push_back(new Helicopter{110111, "Heli", 1});
	aircrafts.push_front(new Helicopter{110112, "H2", 0 });
	aircrafts.push_back(new HotAirBaloon{210112, "Baloon1", 200});
	aircrafts.push_front(new HotAirBaloon{ 210113, "Baloon1", 200 });

	for (auto it = aircrafts.begin(); it != aircrafts.end(); it++)
		std::cout << *(*it) << "\n";
	std::cout << '\n';

	std::sort(aircrafts.begin(), aircrafts.end(), [](Aircraft* first, Aircraft* second)->bool {return first->getId() < second->getId(); });
	for (size_t i = 0; i < aircrafts.size(); i++)
		std::cout << *aircrafts[i] << '\n';
	std::cout << '\n';

	std::deque<Aircraft*>::iterator result = std::find_if(aircrafts.begin(), aircrafts.begin() + 3, 
		[](Aircraft* craft) {return craft->getModel().find("oo") != std::string::npos; });
	std::cout << **result;// ((result < aircrafts.begin() + 3) ? ((*result)->getId()): ("search unsuccesful"));
}