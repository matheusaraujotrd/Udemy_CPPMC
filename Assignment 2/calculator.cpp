#include "calculator.h"
#include <iostream>

double Calculator::getCelsius() {
        return (number_ - 32) / 1.8;
}

double Calculator::getFahrenheit() {
return (9.0 / 5) * number_ + 32;
}

void Calculator::setNumber(double number) {
    number_ = number;
}