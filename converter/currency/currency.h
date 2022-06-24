#ifndef CURRENCY_H
#define CURRENCY_H


#include <string_view>
#include "convert/convert.h"

class Currency : public Converter
{
public:
	Currency() = default;
	Currency(std::string_view description, double amount, std::string_view unit1,
		std::string_view unit2);
	~Currency();

	virtual void convert() const override {
		std::cout << "Currency::convert() called. Converting " << m_description << " " <<
			m_amount << m_unit1 << " to " << m_unit2 << std::endl;
	}

	virtual void convert(double amount, std::string unit1, std::string unit2)
	{
		std::cout << "Converting " << m_description << " " << amount << unit1
			<< " to " << unit2 << std::endl;

		std::cout << "Output: " << amount << unit1 << " => " << this->convert_currency(
			amount,unit1, unit2) << unit2 << std::endl;
	}

	double convert_currency(double amount, std::string unit1, std::string unit2);

protected:
	std::string m_description{ "" };
private:
	double m_amount{ 0.0 };
	std::string m_unit1{ "" };
	std::string m_unit2{ "" };

};

#endif // !CURRENCY_H

