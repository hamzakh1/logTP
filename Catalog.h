/****************************************************************************
**
** Classe Catalog
** Author: p482457
** Date: 8-nov-2021
**
****************************************************************************/

#ifndef _Catalog_Header_
#define _Catalog_Header_

#include "Category.h"

std::ostream& operator << (std::ostream& o, const class Catalog& c);

class Catalog
{
public:
	Catalog();
	virtual ~Catalog();

private:
	friend std::ostream& operator<<(std::ostream & o, const Catalog& c);
	Category m_catalogRoot;
};

#endif

