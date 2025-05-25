#pragma once
#include "ILight.h"
#include <iostream>

class SamsungLight : public ILight {
public:
    void turnOn() override {
        std::cout << "Свет Samsung включен." << std::endl;
    }
};
