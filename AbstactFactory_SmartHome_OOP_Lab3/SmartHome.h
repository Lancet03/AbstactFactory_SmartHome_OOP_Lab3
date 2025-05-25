#pragma once
#include <memory>
#include "ISmartHomeFactory.h"
#include "ILight.h"
#include "IThermostat.h"
#include "ILock.h"

class SmartHome {
private:
	std::unique_ptr<ILight> light;
	std::unique_ptr<IThermostat> thermostat;
	std::unique_ptr<ILock> lock;
public:
    SmartHome(std::unique_ptr<ISmartHomeFactory> factory) {
		light = factory->createLight();
		thermostat = factory->createThermostat();
		lock = factory->createLock();
    }

	~SmartHome() {
		light.release();
		thermostat.release();
		lock.release();
	};

    void run() {
        light->turnOn();
        thermostat->setTemperature(21.0);
        lock->lock();
    }
};
