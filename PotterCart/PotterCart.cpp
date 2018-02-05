#include "PotterCart.h"

PotterCart::PotterCart(void)
{
}

PotterCart::~PotterCart(void)
{
}

void PotterCart::AddPotterBook(uint32_t volume)
{
	m_books.push_back(volume);
}

uint32_t PotterCart::GetTotal(void) const
{
	return m_books.size() * 100;
}
