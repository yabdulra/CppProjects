#ifndef TIME_H
#define TIME_H


#include <string_view>
#include "convert/convert.h"

class Time : public Converter
{
public:
	Time() = default;
	Time(std::string_view description, double time, std::string_view unit1,
		std::string_view unit2);
	~Time();

	virtual void convert() const override {
		std::cout << "Time::convert() called. Converting " << m_description << " " <<
			m_time << m_unit1 << " to " << m_unit2 << std::endl;
	}

	virtual void convert(double time, std::string unit1, std::string unit2)
	{
		std::cout << "Converting " << m_description << " " << time << unit1
			<< " to " << unit2 << std::endl;

		std::cout << "Output: " << time << unit1 << " => " << this->convert_time(time,
			unit1, unit2) << unit2 << std::endl;
	}

	double convert_time(double time, std::string unit1, std::string unit2);

protected:
	std::string m_description{ "" };
private:
	double m_time{ 0.0 };
	std::string m_unit1{ "" };
	std::string m_unit2{ "" };

};

#endif // !TIME_H
