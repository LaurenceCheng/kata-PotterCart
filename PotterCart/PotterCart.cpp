#include "PotterCart.h"
#include <algorithm>

int PotterCart::PRICE_PER_BOOK = 100;
double PotterCart::DISCOUNT_FOR_PAIR = 0.95;

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
		auto totalPriceOfPairs = numberOfPair * static_cast<uint32_t>(PRICE_PER_BOOK * 2 * DISCOUNT_FOR_PAIR);

		auto numberOfSingle = GetNumberOfBooks() - 2 * numberOfPair;
		return totalPriceOfPairs + numberOfSingle * PRICE_PER_BOOK;
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
