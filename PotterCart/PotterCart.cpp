#include "PotterCart.h"
#include <algorithm>

int PotterCart::PRICE_PER_BOOK = 100;

PotterCart::PotterCart(void)
{
}

PotterCart::~PotterCart(void)
{
}

void PotterCart::AddPotterBook(uint32_t volume)
{
	m_books[volume]++;
}

uint32_t PotterCart::GetTotal(void) const
{
	if (m_books.size() >= 2)
	{
		auto numberOfPair = GetNumberOfPair();
		auto totalPriceOfPairs = numberOfPair * PRICE_PER_BOOK * 2 * 0.95;

		auto numberOfSingle = GetNumberOfBooks() - 2 * numberOfPair;
		return totalPriceOfPairs + numberOfSingle * 100;
	}
	else
	{
		return m_books.begin()->second * PRICE_PER_BOOK;
	}
}

uint32_t PotterCart::GetNumberOfBooks(void) const
{
	auto count = 0;
	for (const auto &volume : m_books)
	{
		count += volume.second;
	}

	return count;
}

uint32_t PotterCart::GetNumberOfPair(void) const
{
	auto minBook = min_element(m_books.cbegin(), m_books.cend(), m_books.value_comp());
	return minBook->second;
}
