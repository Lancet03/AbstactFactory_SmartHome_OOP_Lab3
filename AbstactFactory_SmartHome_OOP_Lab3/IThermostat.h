#pragma once

class IThermostat {
public:
    virtual void setTemperature(double temp) = 0;
};