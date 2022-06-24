#include "currency/currency.h"

Currency::Currency(std::string_view descriptipn, double amount, std::string_view unit1,
	std::string_view unit2)
	: m_description(descriptipn), m_amount(amount), m_unit1(unit1), m_unit2(unit2)
{

}

Currency::~Currency()
{

}

//cases
std::string USD_CAD{ "usd cad" }, CAD_USD{ "cad usd" };
std::string GBP_CAD{ "gbp cad" }, CAD_GBP{ "cad gbp" };
std::string EUR_CAD{ "eur cad" }, CAD_EUR{ "cad eur" };
std::string NGN_CAD{ "ngn cad" }, CAD_NGN{ "cad ngn" };
std::string GBP_USD{ "gbp usd" }, USD_GBP{ "usd gbp" };
std::string EUR_USD{ "eur usd" }, USD_EUR{ "usd eur" };
std::string NGN_USD{ "ngn usd" }, USD_NGN{ "usd ngn" };
std::string EUR_GBP{ "eur gbp" }, GBP_EUR{ "gbp eur" };
std::string NGN_GBP{ "ngn gbp" }, GBP_NGN{ "gbp ngn" };
std::string NGN_EUR{ "ngn eur" }, EUR_NGN{ "eur ngn" };


double Currency::convert_currency(double amount, std::string unit1,
	std::string unit2) {

	double result{ 0.0 };
	std::string from_to{ unit1 + " " + unit2 };

	if (from_to == USD_CAD) return amount * 1.2914;
	if (from_to == CAD_USD) return amount / 1.2914;

	if (from_to == GBP_CAD) return amount * 1.5895;
	if (from_to == CAD_GBP) return amount / 1.5895;

	if (from_to == EUR_CAD) return amount * 1.3668;
	if (from_to == CAD_EUR) return amount / 1.3668;

	if (from_to == NGN_CAD) return amount * 0.0031;
	if (from_to == CAD_NGN) return amount / 0.0031;

	if (from_to == GBP_USD) return amount * 1.2313;
	if (from_to == USD_GBP) return amount / 1.2313;

	if (from_to == EUR_USD) return amount * 1.0582;
	if (from_to == USD_EUR) return amount / 1.0582;

	if (from_to == NGN_USD) return amount * 0.0024;
	if (from_to == USD_NGN) return amount / 0.0024;

	if (from_to == EUR_GBP) return amount * 0.8594;
	if (from_to == GBP_EUR) return amount / 0.8594;

	if (from_to == NGN_GBP) return amount * 0.0020;
	if (from_to == GBP_NGN) return amount / 0.0020;

	if (from_to == NGN_EUR) return amount * 0.0023;
	if (from_to == EUR_NGN) return amount / 0.0023;


	return result;
}