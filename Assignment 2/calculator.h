#pragma once

class Calculator {
    public:
        double getCelsius();
        double getFahrenheit();
        void setNumber(double number);

    private: 
        double number_;
};