/****************************************************************************
**
** Classe UnitProduct
** Author: p482457
** Date: 8-nov-2021
**
****************************************************************************/

#ifndef _UnitProduct_Header_
#define _UnitProduct_Header_

#include "AbsProduct.h"

class UnitProduct : public AbsProduct
{
public:
	UnitProduct(std::string name, std::string origin, int UPC, float price);
	virtual ~UnitProduct() {}
	virtual AbsCatalogComponent* clone(void) const;

	float getPricePerUnit() const;
	void setPricePerUnit(float price);

	float getPrice(int quantity) const;

protected:
	virtual std::ostream& printToStream(std::ostream& o) const;
	float m_pricePerUnit;
};

#endif
