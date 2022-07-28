#include <iostream>
#include <iomanip>
#include "box.h"

int main() {

double input;
double wannaContinue = 2;
Box b;

while (wannaContinue == 2)
{
std::cout << "Type the information related to the box:" << "\n";
std::cout << "Length: ";
std::cin >> input;
b.setLength(input);
std::cout << "\n" << "Width: ";
std::cin >> input;
b.setWidth(input);
std::cout << "\n" << "Height: ";
std::cin >> input;
b.setHeight(input);
std::cout << "\n" << "Your box dimensions are:" << "\n";
std::cout << "Base Area: " << b.getBaseArea() << "\n";
b.setBaseArea(b.getBaseArea());
std::cout << "Volume: " << b.getVolume() << "\n";
std::cout << "Do you wish to continue? (1 - No / 2 - Yes)";
std::cin >> wannaContinue;
}
return 0;
}
