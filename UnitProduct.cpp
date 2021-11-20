#include <string>

#include "UnitProduct.h"

UnitProduct::UnitProduct(std::string name, std::string origin, int UPC, float price)
	: AbsProduct(std::string(""), std::string(""), 0 ), m_pricePerUnit(price)  // À COMPLÉTER
{
}

AbsCatalogComponent * UnitProduct::clone(void) const 
{ 
	return new UnitProduct(*this);
}

float UnitProduct::getPricePerUnit() const 
{ 
	return m_pricePerUnit;
}

void UnitProduct::setPricePerUnit(float price)
{ 
	m_pricePerUnit = price;
}

float UnitProduct::getPrice(int quantity) const 
{ 
	return m_pricePerUnit * quantity;
}

std::ostream & UnitProduct::printToStream(std::ostream & o) const
{
	o << getName() << "(from " << getOrigin() << ") " << getPricePerUnit() << std::endl;
	return o;
}
