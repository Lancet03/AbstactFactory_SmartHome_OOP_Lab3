#pragma once
#include "ILock.h"
#include <iostream>

class PhilipsLock : public ILock {
public:
    void lock() override {
        std::cout << "Замок Philips открыт." << std::endl;
    }
};