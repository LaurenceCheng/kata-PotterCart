#include "PotterCart.h"

int PotterCart::PRICE_PER_BOOK = 100;

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
	return m_books.size() * PRICE_PER_BOOK;
}
