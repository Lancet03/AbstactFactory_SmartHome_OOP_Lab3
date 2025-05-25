#pragma once
#include "ILight.h"
#include <iostream>

class PhilipsLight : public ILight {
public:
    void turnOn() override {
        std::cout << "Свет Philips включен." << std::endl;
    }
};
