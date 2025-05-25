#pragma once
#include "ILock.h"
#include <iostream>

class SamsungLock : public ILock {
public:
    void lock() override {
        std::cout << "Замок Samsung открыт." << std::endl;
    }
};