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

uint32_t PotterCart::GetTotal(void)
{
	if (m_books.size() >= 3)
	{
		auto countOfTrio = GetCountOfTrio();
		auto totalPriceOfTrios = countOfTrio * static_cast<uint32_t>(PRICE_PER_BOOK * 3 * 0.9);
		RemoveTrio();

		auto countOfDuo = GetCountOfDuo();
		auto totalPriceOfDuos = countOfDuo * static_cast<uint32_t>(PRICE_PER_BOOK * 2 * DISCOUNT_FOR_PAIR);
		RemoveDuo();

		auto countOfSolo = GetCountOfSolo();
		return totalPriceOfTrios + totalPriceOfDuos + countOfSolo * PRICE_PER_BOOK;
	}
	if (m_books.size() == 2)
	{
		auto countOfDuo = GetCountOfDuo();
		auto totalPriceOfDuos = countOfDuo * static_cast<uint32_t>(PRICE_PER_BOOK * 2 * DISCOUNT_FOR_PAIR);
		RemoveDuo();

		auto countOfSolo = GetCountOfSolo();
		return totalPriceOfDuos + countOfSolo * PRICE_PER_BOOK;
	}
	else
	{
		return m_books.begin()->second * PRICE_PER_BOOK;
	}
}

uint32_t PotterCart::GetCountOfSet(uint32_t numberPerSet) const
{
	if (numberPerSet != m_books.size())
	{
		return 0;
	}

	auto volumeWithMinCount = std::min_element(m_books.cbegin(), m_books.cend(), m_books.value_comp());
	return volumeWithMinCount->second;
}

uint32_t PotterCart::GetCountOfSolo(void) const
{
	return GetCountOfSet(1);
}

uint32_t PotterCart::GetCountOfDuo(void) const
{
	return GetCountOfSet(2);
}

uint32_t PotterCart::GetCountOfTrio(void) const
{
	return GetCountOfSet(3);
}

void PotterCart::RemoveDuo(void)
{
	auto countOfDuo = GetCountOfDuo();
	auto iter = m_books.begin();
	while (iter != m_books.end())
	{
		if (iter->second == countOfDuo)
		{
			iter = m_books.erase(iter);
		}
		else
		{
			iter->second -= countOfDuo;
			iter++;
		}
	}
}

void PotterCart::RemoveTrio(void)
{
	RemoveDuo();
}
