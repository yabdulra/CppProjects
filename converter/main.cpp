#include <iostream>

#include "convert/convert.h"
#include "length/length.h"
#include "mass/mass.h"
#include "temperature/temperature.h"
#include "time/time.h"
#include "currency/currency.h"




int main()
{
    int type;
    std::string unit1, unit2;
    double amount;

    Converter* convert_ptr = new Converter("Unit");
    Length* length_ptr = new Length("Length", 0, "", "");
    Mass* mass_ptr = new Mass("Mass", 0, "", "");
    Temperature* temperature_ptr = new Temperature("Temperature", 0, "", "");
    Time* time_ptr = new Time("Time", 0, "", "");
    Currency* currency_ptr = new Currency("Currency", 0, "", "");


    std::cout << "Welcome to YUSAH C++ converter." << std::endl;
    std::cout << "=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;
    std::cout << std::endl;
    std::cout << "Select the type of converter you'd like to use:" << std::endl;
    std::cout << "1. Currency, 2. Length, 3. Mass, 4. Temperature, 5. Time" << std::endl;
    
    std::cin >> type;

    switch (type)
    {
    case 1: {
        std::cout << "Enter currency amount: " << std::endl;
        std::cin >> amount;
        std::cout << "Select from [cad, eur, gbp, ngn, usd], the currency you" <<
            " are converting from." << std::endl;
        std::cin >> unit1;
        std::cout << "Select from [cad, eur, gbp, ngn, usd], the currency you" <<
            " are converting to." << std::endl;
        std::cin >> unit2;

        currency_ptr->convert(amount, unit1, unit2);
    }
          break;

    case 2: {
        std::cout << "Type in length: " << std::endl;
        std::cin >> amount;
        std::cout << "Select from [ft, in, m, mi, yd], the unit you" <<
            " are converting from." << std::endl;
        std::cin >> unit1;
        std::cout << "Select from [ft, in, m, mi, yd], the unit you" <<
            " are converting to." << std::endl;
        std::cin >> unit2;

        length_ptr->convert(amount, unit1, unit2);
    }
          break;

    case 3: {
        std::cout << "Type in mass: " << std::endl;
        std::cin >> amount;
        std::cout << "Select from [kg, lb, oz, t], the unit you" <<
            " are converting from." << std::endl;
        std::cin >> unit1;
        std::cout << "Select from [kg, lb, oz, t], the unit you" <<
            " are converting to." << std::endl;
        std::cin >> unit2;

        mass_ptr->convert(amount, unit1, unit2);
    }
          break;

    case 4: {
        std::cout << "Type in temperature: " << std::endl;
        std::cin >> amount;
        std::cout << "Select from [C, F, K], the unit you" <<
            " are converting from." << std::endl;
        std::cin >> unit1;
        std::cout << "Select from [C, F, K], the unit you" <<
            " are converting to." << std::endl;
        std::cin >> unit2;

        temperature_ptr->convert(amount, unit1, unit2);
    }
          break;

    case 5: {
        std::cout << "Type in time: " << std::endl;
        std::cin >> amount;
        std::cout << "Select from [sec, min, hr, d, yr], the unit you" <<
            " are converting from." << std::endl;
        std::cin >> unit1;
        std::cout << "Select from [sec, min, hr, d, yr], the unit you" <<
            " are converting to." << std::endl;
        std::cin >> unit2;

        time_ptr->convert(amount, unit1, unit2);
    }
          break;

    default:

        std::cout << "Conveter choice not available." << std::endl;
        break;
    }
    std::cout << std::endl;
    std::cout << "=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;
    std::cout << std::endl;
    std::cout << "End of conversion." << std::endl;
    delete convert_ptr;
    delete currency_ptr;
    delete length_ptr;
    delete mass_ptr;
    delete temperature_ptr;
    delete time_ptr;



    return 0;
}

