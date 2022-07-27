#include <iostream>
#include <iomanip>
#include "calculator.h"
//Simple conversor from Fahrenheit to Celsius (and vice-versa)

int main() {
    //initializing the calculator and declaring external variables

    Calculator c;
    int selection;
    int continueselection = 1;
    double input;
    //Starting loop

    while (continueselection == 1) {
    std::cout << "Type the number for which format you want to convert to (target format):" << "\n";
    std::cout << std::internal << std::setw(20) << "1 - Fahrenheit" << std::setw(20) << "2 - Celsius" << "\n";
    std::cin >> selection;
    //Converting from Celsius to Fahrenheit

    if (selection == 1)
    {
        std::cout << "Type the number to be converted:" << "\n";
        std::cin >> input;
        c.setNumber(input);
        std::cout << "The converted value is: " << c.getFahrenheit() << "" << " Fahrenheit" << "\n";
     } else if (selection == 2)
     //Converting from Fahrenheit to Celsius

    {
        std::cout << "Type the number to be converted:" << "\n";
        std::cin >> input;
        c.setNumber(input);
        std::cout << "The converted value is: " << c.getCelsius() << "" << " Celsius" << "\n";
    } else if (selection != 1 && selection != 2)
    //A third case for any invalid input

    {
        std::cout << "Seleção inválida.";
    }
    std::cout << "Deseja continuar? \n";
    std::cout << std::setw(10) << "1 - Sim" << std::setw(10) << "2 - Nao" << "\n";
    std::cin >> continueselection;
    }
    return 0;
}