/****************************************************************************
**
** Classe AbsProduct
** Author: p482457
** Date: 8-nov-2021
**
****************************************************************************/

#ifndef _AbsProduct_Header_
#define _AbsProduct_Header_

#include "AbsCatalogComponent.h"

class AbsProduct : public AbsCatalogComponent
{
public:
	AbsProduct(std::string name, std::string origin, int UPC );

	std::string getOrigin() const { return m_origin; }
	void setOrigin( std::string origin ) { m_origin = origin;  }
	int getUPC() const { return m_UPC; }
	void setUPC(int UPC) { m_UPC = UPC; }

	virtual float getPrice(int quantity) const = 0;

	virtual AbsCatalogComponent& addCatalogComponent(const AbsCatalogComponent& member);
	virtual CatalogComponentIterator begin();
	virtual CatalogComponentIterator_const cbegin() const;
	virtual CatalogComponentIterator_const cend() const;
	virtual CatalogComponentIterator end();
	virtual void deleteCatalogComponent(CatalogComponentIterator_const child);

private:
	std::string m_origin;
	int m_UPC;

	static CatalogComponentContainer m_emptyContainer;
};

#endif
