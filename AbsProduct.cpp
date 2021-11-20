/****************************************************************************
**
** Classe AbsProduct
** Author: p482457
** Date: 25-oct-2019
**
****************************************************************************/

#include "AbsProduct.h"

// Define class static members
CatalogComponentContainer AbsProduct::m_emptyContainer;

AbsProduct::AbsProduct(std::string name, std::string origin, int UPC)
	: AbsCatalogComponent(name), m_origin(origin), m_UPC(UPC)
{
}

AbsCatalogComponent& AbsProduct::addCatalogComponent(const AbsCatalogComponent&)
{
	return *(*(m_emptyContainer.begin()));
}

CatalogComponentIterator AbsProduct::begin()
{
	return m_emptyContainer.begin();
}

CatalogComponentIterator_const AbsProduct::cbegin() const
{
	return m_emptyContainer.cbegin();
}

CatalogComponentIterator_const AbsProduct::cend() const
{
	return m_emptyContainer.cend();
}

CatalogComponentIterator AbsProduct::end()
{
	return m_emptyContainer.end();
}

void AbsProduct::deleteCatalogComponent(CatalogComponentIterator_const)
{
}


