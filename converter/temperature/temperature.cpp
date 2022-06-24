#include "temperature/temperature.h"

Temperature::Temperature(std::string_view descriptipn, double temperature, std::string_view unit1,
	std::string_view unit2)
	: m_description(descriptipn), m_temperature(temperature), m_unit1(unit1), m_unit2(unit2)
{

}

Temperature::~Temperature()
{

}

//cases
std::string K_C{ "K C" }, C_K{ "C K" };
std::string F_C{ "F C" }, C_F{ "C F" };
std::string F_K{ "F K" }, K_F{ "K F" };

double Temperature::convert_temperature(double temperature, std::string unit1,
	std::string unit2) 
	{
	double result{ 0.0 };
	std::string from_to{ unit1 + " " + unit2 };

	if (from_to == K_C) return temperature - 273.15;
	if (from_to == C_K) return temperature + 273.15;

	if (from_to == F_C) return (temperature - 32) * 5 / 9;
	if (from_to == C_F) return (temperature * 9 / 5) + 32;

	if (from_to == F_K) return (temperature - 32) * 5 / 9 + 273.15;
	if (from_to == K_F) return (temperature - 273.15) * 9 / 5 + 32;

	return result;
}