#ifndef LENGTH_H
#define LENGTH_H


#include <string_view>
#include "convert/convert.h"

class Length : public Converter
{
public:
	Length() = default;
	Length(std::string_view description, double distance, std::string_view unit1,
		std::string_view unit2);
	~Length();

	virtual void convert() const override {
		std::cout << "Length::convert() called. Converting " << m_description << " " <<
			m_distance <<m_unit1 << " to " << m_unit2 << std::endl;
	}

	virtual void convert(double distance, std::string unit1, std::string unit2)
	{
		std::cout << "Converting " << m_description << ": " << distance << unit1
			<< " to " << unit2 << std::endl;
		
		std::cout << "Output: " << distance << unit1 << " => " << this->convert_length(distance,
			unit1, unit2) << unit2 << std::endl;
	}

	double convert_length(double distance, std::string unit1, std::string unit2);

protected:
	std::string m_description{ "" };
private:
	double m_distance{0.0};
	std::string m_unit1{""};
	std::string m_unit2{""};

};

#endif // !LENGTH_H
