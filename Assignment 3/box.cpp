#include "box.h"

void Box::setLength(double length) {
    length_ = length;
}

void Box::setHeight(double height) {
    height_ = height;
}

void Box::setWidth(double width) {
    width_ = width;
}

void Box::setBaseArea(double baseArea) {
    baseArea_ = baseArea;
}

double Box::getBaseArea() {
    return width_ * length_;
}

double Box::getVolume() {
    return baseArea_ * height_;
}