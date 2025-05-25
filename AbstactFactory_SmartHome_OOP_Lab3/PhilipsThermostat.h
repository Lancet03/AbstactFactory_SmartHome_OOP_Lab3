#pragma once
#include "IThermostat.h"
#include <iostream>

class PhilipsThermostat : public IThermostat {
public:
	void setTemperature(double temp) override {
		std::cout << "Температура в термостате Philips выставлена на: " << temp << "°C" << std::endl;
	}
};