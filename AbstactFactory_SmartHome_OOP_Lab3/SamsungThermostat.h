#pragma once

#include "IThermostat.h"
#include <iostream>

class SamsungThermostat : public IThermostat {
public:
	void setTemperature(double temp) override {
		std::cout << "Температура в термостате Samsung выставлена на: " << temp << "°C" << std::endl;
	}
};