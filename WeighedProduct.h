/****************************************************************************
**
** Classe WeighedProduct
** Author: p482457
** Date: 8-nov-2021
**
****************************************************************************/

#ifndef _WeighedProduct_Header_
#define _WeighedProduct_Header_

#include "AbsProduct.h"

class WeighedProduct : public AbsProduct
{
public:
	WeighedProduct(std::string name, std::string origin, int UPC, float price);
	virtual ~WeighedProduct() {}
	virtual AbsCatalogComponent* clone(void) const;

	float getPricePerGram() const;
	void setPricePerGram(float price);

	float getPrice(int quantity) const;

protected:
	virtual std::ostream& printToStream(std::ostream& o) const;
	float m_pricePerGram;
};

#endif
