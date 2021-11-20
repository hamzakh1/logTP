#include <string>

#include "WeighedProduct.h"

WeighedProduct::WeighedProduct(std::string name, std::string origin, int UPC, float price)
	: AbsProduct(std::string(""), std::string(""), 0), m_pricePerGram(price) // � COMPL�TER
{
}

AbsCatalogComponent * WeighedProduct::clone(void) const 
{ 
	// � COMPL�TER
	return new WeighedProduct(*this);
}

float WeighedProduct::getPricePerGram() const 
{ 
	// � COMPL�TER
	return m_pricePerGram;
}

void WeighedProduct::setPricePerGram(float price) 
{ 
	m_pricePerGram = price;
}

float WeighedProduct::getPrice(int quantity) const 
{ 
	// � COMPL�TER
	return getPricePerGram() * quantity;
}

std::ostream & WeighedProduct::printToStream(std::ostream & o) const
{
	o << getName() << "(from " << getOrigin() << ") " << getPricePerGram() << "/kg." << std::endl;
	return o;
}
