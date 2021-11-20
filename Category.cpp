#include <string>

#include "Category.h"

int Category::m_indent = 0;

Category::Category(std::string name)
	: AbsCatalogComponent(name)// À COMPLÉTER
{
}

Category::Category(const Category & mdd)
// À COMPLÉTER
	: AbsCatalogComponent(mdd.m_name)
{
	// À REVOIR
	for (auto& it : mdd.m_products) {
		addCatalogComponent(*it);
	}
}

Category * Category::clone(void) const
{
	return new Category(*this);
}

AbsCatalogComponent& Category::addCatalogComponent(const AbsCatalogComponent & member)
{
	m_products.push_back((CatalogComponentPtr)(member.clone()))
	return *this;
}

CatalogComponentIterator Category::begin()
{
	return m_products.begin();
}

CatalogComponentIterator_const Category::cbegin() const
{
	return m_products.cbegin();
}

CatalogComponentIterator_const Category::cend() const
{
	return m_products.cend();
}

CatalogComponentIterator Category::end()
{
	return m_products.end();
}

void Category::deleteCatalogComponent(CatalogComponentIterator_const child)
{
	// À COMPLÉTER
}

void Category::deleteAllComponents(void)
{
	// À COMPLÉTER
}

std::ostream & Category::printToStream(std::ostream & o) const
{
	// À COMPLÉTER
	o << this->getName() << std::endl;
	for (auto it = m_products.cbegin(); i != m_products.cend(); i.operator++()) {
		o << '\t' << *i.operator->()->get();
	} // A REVOIR
	return o;
}

std::ostream & Category::indent(std::ostream & o) const
{
	for (int i = 0; i < m_indent; ++i)
		o << '\t';
	return o;
}
