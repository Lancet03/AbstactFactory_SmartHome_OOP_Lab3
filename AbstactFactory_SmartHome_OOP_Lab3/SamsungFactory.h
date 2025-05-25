#pragma once

#pragma once
#include "ISmartHomeFactory.h"
#include "SamsungLight.h"
#include "SamsungThermostat.h"
#include "SamsungLock.h"
#include <memory>

class SamsungFactory : public ISmartHomeFactory {
public:
    std::unique_ptr<ILight> createLight() override {
        return std::make_unique<SamsungLight>();
    }
    std::unique_ptr<IThermostat> createThermostat() override {
        return std::make_unique<SamsungThermostat>();
    }
    std::unique_ptr<ILock> createLock() override {
        return std::make_unique<SamsungLock>();
    }
};
