#include <iostream>
#include <string>

int main() {
std::string country;
std::cout << "Where do you live?" << std::endl;
std::cin >> country;
std::cout << std::endl;
std::cout << "I've heard great things about " << country << ". I'd like to go sometime.";
return 0;
}