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
	if (m_books.size() >= 2)
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

uint32_t PotterCart::GetCountOfSolo(void) const
{
	auto minCountOfVolume = 0u;
	for (const auto &volume : m_books)
	{
		minCountOfVolume = std::min(volume.second, minCountOfVolume);
	}

	return minCountOfVolume;
}

uint32_t PotterCart::GetCountOfDuo(void) const
{
	auto minCountOfVolume = std::numeric_limits<uint32_t>::max();
	for (const auto &volume : m_books)
	{
		if (volume.second == 0) continue;
		minCountOfVolume = std::min(volume.second, minCountOfVolume);
	}

	return minCountOfVolume;
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
