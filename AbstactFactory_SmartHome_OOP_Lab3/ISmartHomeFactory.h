#pragma once
#include <memory>
#include "ILight.h"
#include "IThermostat.h"
#include "ILock.h"

class ISmartHomeFactory {
public:
    virtual std::unique_ptr<ILight> createLight() = 0;
    virtual std::unique_ptr<IThermostat> createThermostat() = 0;
    virtual std::unique_ptr<ILock> createLock() = 0;
    virtual ~ISmartHomeFactory() = default;
};