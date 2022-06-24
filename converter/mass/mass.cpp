#include "mass/mass.h"

Mass::Mass(std::string_view descriptipn, double mass, std::string_view unit1,
	std::string_view unit2)
	: m_description(descriptipn), m_mass(mass), m_unit1(unit1), m_unit2(unit2)
{

}

Mass::~Mass()
{

}

//cases
std::string kg_t{ "kg t" }, t_kg{ "t kg" };
std::string oz_t{ "oz t" }, t_oz{ "t oz" };
std::string lb_t{ "lb t" }, t_lb{ "t lb" };
std::string oz_kg{ "oz kg" }, kg_oz{ "kg_oz" };
std::string lb_kg{ "lb kg" }, kg_lb{ "kg lb" };
std::string lb_oz{ "lb oz" }, oz_lb{ "oz lb" };


double Mass::convert_mass(double mass, std::string unit1, std::string unit2) {
	double result{ 0.0 };
	std::string from_to{ unit1 + " " + unit2 };

	if (from_to == kg_t) return mass / 1000;
	if (from_to == t_kg) return mass * 1000;

	if (from_to == oz_t) return mass / 35270;
	if (from_to == t_oz) return mass * 35270;

	if (from_to == lb_t) return mass / 2205;
	if (from_to == t_lb) return mass * 2205;

	if (from_to == oz_kg) return mass / 35.274;
	if (from_to == kg_oz) return mass * 35.274;

	if (from_to == lb_kg) return mass / 2.205;
	if (from_to == kg_lb) return mass * 2.205;

	if (from_to == lb_oz) return mass * 16;
	if (from_to == oz_lb) return mass / 16;

	return result;
}