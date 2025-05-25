#pragma once
#include "ISmartHomeFactory.h"
#include "PhilipsLight.h"
#include "PhilipsThermostat.h"
#include "PhilipsLock.h"
#include <memory>

class PhilipsFactory : public ISmartHomeFactory {
public:
    std::unique_ptr<ILight> createLight() override {
        return std::make_unique<PhilipsLight>();
    }
    std::unique_ptr<IThermostat> createThermostat() override {
        return std::make_unique<PhilipsThermostat>();
    }
    std::unique_ptr<ILock> createLock() override {
        return std::make_unique<PhilipsLock>();
    }
};
