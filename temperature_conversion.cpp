#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    double temp;
    char unit;

    std::cout << "***** Temperature Conversion ******" << '\n';
    std::cout << "F = Fahrenheit" << '\n';
    std::cout << "C = Celsius" << '\n';
    std::cout << "What unit would you like to convert to?: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius: " << '\n';
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "The temperature is " << temp << " degrees Fahrenheit." << '\n';
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Fahrenheit: " << '\n';
        std::cin >> temp;

        
        temp = (temp - 32.0) / 1.8;
        std::cout << "The temperature is " << temp << " degrees Celsius." << '\n';
    }
    else{
        std::cout << "Invalid response. Please select either Fahrenheit(F) or Celsius(C)." << '\n';
    }

    std::cout << "***********************************" << '\n';

    system("pause");
    return 0;
}