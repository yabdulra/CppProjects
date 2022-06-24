#ifndef TEMPERATURE_H
#define TEMPERATURE_H


#include <string_view>
#include "convert/convert.h"

class Temperature : public Converter
{
public:
	Temperature() = default;
	Temperature(std::string_view description, double temperature, std::string_view unit1,
		std::string_view unit2);
	~Temperature();

	virtual void convert() const override {
		std::cout << "Temperature::convert() called. Converting " << m_description << " "
			<< m_temperature << m_unit1 << " to " << m_unit2 << std::endl;
	}

	virtual void convert(double temperature, std::string unit1, std::string unit2)
	{
		std::cout << "Converting " << m_description << " " << temperature << unit1
			<< " to " << unit2 << std::endl;

		std::cout << "Output: " << temperature << unit1 << " => " << this->convert_temperature(temperature,
			unit1, unit2) << unit2 << std::endl;
	}

	double convert_temperature(double temperature, std::string unit1, std::string unit2);

protected:
	std::string m_description{ "" };
private:
	double m_temperature{ 0.0 };
	std::string m_unit1{ "" };
	std::string m_unit2{ "" };

};

#endif // !TEMPERATURE_H

