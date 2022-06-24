#ifndef CONVERT_H
#define CONVERT_H


#include <iostream>
#include <string_view>
#include <string>

class Converter {
public:
	Converter() = default;
	Converter(std::string_view m_description);
	~Converter();

	virtual void convert() const {
		std::cout << "Converter::convert() called. Converting " << m_description << std::endl;
	}

protected:
	std::string m_description;
};


#endif // !CONVERT_H
