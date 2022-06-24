#include "time/time.h"

Time::Time(std::string_view descriptipn, double time, std::string_view unit1,
	std::string_view unit2)
	: m_description(descriptipn), m_time(time), m_unit1(unit1), m_unit2(unit2)
{

}

Time::~Time()
{

}

//cases
std::string min_sec{ "min sec" }, sec_min{ "sec min" };
std::string hr_sec{ "hr sec" }, sec_hr{ "sec hr" };
std::string d_sec{ "d sec" }, sec_d{ "sec d" };
std::string yr_sec{ "yr sec" }, sec_yr{ "sec yr" };
std::string hr_min{ "hr min" }, min_hr{ "min hr" };
std::string d_min{ "d min" }, min_d{ "min d" };
std::string yr_min{ "yr min" }, min_yr{ "min yr" };
std::string d_hr{ "d hr" }, hr_d{ "hr_d" };
std::string yr_hr{ "yr hr" }, hr_yr{ "hr yr" };
std::string yr_d{ "yr d" }, d_yr{ "d_yr" };


double Time::convert_time(double time, std::string unit1, std::string unit2) {
	double result{ 0.0 };
	std::string from_to{ unit1 + " " + unit2 };

	if (from_to == min_sec) return time * 60;
	if (from_to == sec_min) return time / 60;

	if (from_to == hr_sec) return time * 3600;
	if (from_to == sec_hr) return time / 3600;

	if (from_to == d_sec) return time * 86400;
	if (from_to == sec_d) return time / 86400;

	if (from_to == yr_sec) return time * 31540000;
	if (from_to == sec_yr) return time / 31540000;

	if (from_to == hr_min) return time * 60;
	if (from_to == min_hr) return time / 60;

	if (from_to == d_min) return time * 1440;
	if (from_to == min_d) return time / 1440;

	if (from_to == yr_min) return time * 525600;
	if (from_to == min_yr) return time / 525600;

	if (from_to == d_hr) return time * 24;
	if (from_to == hr_d) return time / 24;

	if (from_to == yr_hr) return time * 8760;
	if (from_to == hr_yr) return time / 8760;

	if (from_to == yr_d) return time * 365;
	if (from_to == d_yr) return time / 365;


	return result;
}