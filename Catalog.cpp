

#include "Catalog.h"
#include "Category.h"
#include "WeighedProduct.h"
#include "UnitProduct.h"

Catalog::Catalog()
	: m_catalogRoot("All products")
{
	// Add some items in the catalog
	AbsCatalogComponent& dairy = m_catalogRoot.addCatalogComponent(Category("Dairy"));
	AbsCatalogComponent& milk3_25pc = dairy.addCatalogComponent(UnitProduct("Milk 3.25% - 4l", "Quebec", 2121, 7.79f));
	AbsCatalogComponent& milk2pc = dairy.addCatalogComponent(UnitProduct("Milk 2% - 2l", "Quebec", 2122, 4.69f));
	AbsCatalogComponent& milk1pc = dairy.addCatalogComponent(UnitProduct("Milk 1% - 1l", "Quebec", 2123, 1.90f));

	AbsCatalogComponent& fruitsVeges = m_catalogRoot.addCatalogComponent(Category("Fruits&Vegetables"));
	AbsCatalogComponent& bananas = fruitsVeges.addCatalogComponent(WeighedProduct("Bananas", "Guatemala", 4021, 0.00219f));
	AbsCatalogComponent& pears = fruitsVeges.addCatalogComponent(WeighedProduct("Pears", "USA", 4063, 0.00179f));
	AbsCatalogComponent& orange = fruitsVeges.addCatalogComponent(UnitProduct("Organge", "USA", 4063, 0.59f));

	AbsCatalogComponent& localFruitsVeges = fruitsVeges.addCatalogComponent(Category("Local Fruits&Vegetables"));
	AbsCatalogComponent& apple = localFruitsVeges.addCatalogComponent(WeighedProduct("Apple", "Quebec", 3057, 0.0047f));
	AbsCatalogComponent& blueberries = localFruitsVeges.addCatalogComponent(UnitProduct("Blueberries", "Quebec", 3057, 3.99f));
}


Catalog::~Catalog()
{
}

std::ostream & operator<<(std::ostream & o, const Catalog & c)
{
	return o << c.m_catalogRoot;
}
