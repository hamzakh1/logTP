#include <string>

#include "WeighedProduct.h"

WeighedProduct::WeighedProduct(std::string name, std::string origin, int UPC, float price)
	: AbsProduct(std::string(""), std::string(""), 0), m_pricePerGram(price) // À COMPLÉTER
{
}

AbsCatalogComponent * WeighedProduct::clone(void) const 
{ 
	// À COMPLÉTER
	return new WeighedProduct(*this);
}

float WeighedProduct::getPricePerGram() const 
{ 
	// À COMPLÉTER
	return m_pricePerGram;
}

void WeighedProduct::setPricePerGram(float price) 
{ 
	m_pricePerGram = price;
}

float WeighedProduct::getPrice(int quantity) const 
{ 
	// À COMPLÉTER
	return getPricePerGram() * quantity;
}

std::ostream & WeighedProduct::printToStream(std::ostream & o) const
{
	o << getName() << "(from " << getOrigin() << ") " << getPricePerGram() << "/kg." << std::endl;
	return o;
}
