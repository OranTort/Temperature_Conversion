#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    double temp;
    char unit;
    char cont;

    std::cout << "***** Temperature Conversion ******" << '\n';
    std::cout << "F = Fahrenheit" << '\n';
    std::cout << "C = Celsius" << '\n';
    do{std::cout << "What unit would you like to convert to?: " << '\n';
    std::cin >> unit;
    unit = toupper(unit);

    if(unit == 'F'){
        std::cout << "Enter the temperature in Celsius: " << '\n';
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "The temperature is " << temp << " degrees Fahrenheit." << '\n';
        std::cout << "Would you like to continue?(Y/N): " << '\n';
        std::cin >> cont;
        cont = toupper(cont);
    }
    else if(unit == 'C'){
        std::cout << "Enter the temperature in Fahrenheit: " << '\n';
        std::cin >> temp;

        
        temp = (temp - 32.0) / 1.8;
        std::cout << "The temperature is " << temp << " degrees Celsius." << '\n';
        std::cout << "Would you like to continue?(Y/N): " << '\n';
        std::cin >> cont;
        cont = toupper(cont);
    }
    else{
        std::cout << "Invalid response. Please select either Fahrenheit(F) or Celsius(C)." << '\n';
        std::cout << "Would you like to continue?(Y/N): " << '\n';
        std::cin >> cont;
        cont = toupper(cont);
    }}while(cont == 'Y');

    std::cout << "***********************************" << '\n';

    return 0;
}