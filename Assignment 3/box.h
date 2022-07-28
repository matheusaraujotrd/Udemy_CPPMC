#pragma once

class Box {
    
    public:
        double getBaseArea();
        double getVolume();
        void setBaseArea(double baseArea);
        void setLength(double length);
        void setWidth(double width);
        void setHeight(double height);

    private:
        double baseArea_;
        double length_;
        double width_;
        double height_;
};