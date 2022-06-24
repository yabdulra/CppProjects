#include <vector>
#include "length/length.h"

Length::Length(std::string_view descriptipn, double distance, std::string_view unit1,
	std::string_view unit2)
	: m_description(descriptipn), m_distance(distance), m_unit1(unit1), m_unit2(unit2)
{
	
}

Length::~Length()
{

}

//cases
std::string ft_m{ "ft m" }, m_ft{ "m ft" };
std::string in_m{ "in m" }, m_in{ "m in" };
std::string yd_m{ "yd m" }, m_yd{ "m yd" };
std::string mi_m{ "mi m" }, m_mi{ "m mi" };
std::string in_ft{ "in ft" }, ft_in{ "ft in" };
std::string yd_ft{ "yd ft" }, ft_yd{ "ft yd" };
std::string mi_ft{ "mi ft" }, ft_mi{ "ft mi" };
std::string yd_in{ "yd in" }, in_yd{ "in yd" };
std::string mi_in{ "mi in" }, in_mi{ "in mi" };
std::string yd_mi{ "yd mi" }, mi_yd{ "mi yd" };


double Length::convert_length(double distance, std::string unit1, std::string unit2) {
	double result{ 0.0 };
	std::string from_to{unit1+" "+unit2};

	if (from_to == ft_m) return distance / 3.281;
	if (from_to == m_ft) return distance * 3.281;

	if (from_to == in_m) return distance / 39.37;
	if (from_to == m_in) return distance * 39.37;
	
	if (from_to == yd_m) return distance / 1.094;
	if (from_to == m_yd) return distance * 1.094;

	if (from_to == mi_m) return distance * 1609;
	if (from_to == m_mi) return distance / 1609;

	if (from_to == in_ft) return distance / 12;
	if (from_to == ft_in) return distance * 12;

	if (from_to == yd_ft) return distance * 3;
	if (from_to == ft_yd) return distance / 3;

	if (from_to == mi_ft) return distance * 5280;
	if (from_to == ft_mi) return distance / 5280;

	if (from_to == yd_in) return distance * 36;
	if (from_to == in_yd) return distance / 36;

	if (from_to == mi_in) return distance * 63360;
	if (from_to == in_mi) return distance / 63360;

	if (from_to == yd_mi) return distance / 1760;
	if (from_to == mi_yd) return distance * 1760;

	
	return result;
}