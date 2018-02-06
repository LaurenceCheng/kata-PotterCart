#pragma once
#include <cstdint>
#include <map>

class PotterCart
{
public:
	PotterCart(void);
	~PotterCart(void);

	void AddPotterBook(uint32_t volume);
	uint32_t GetTotal(void);

private:
	static int PRICE_PER_BOOK;
	static double DISCOUNT_FOR_PAIR;

private:
	uint32_t GetCountOfSolo(void) const;
	uint32_t GetCountOfDuo(void) const;
	void RemoveDuo(void);

	std::map<uint32_t, uint32_t> m_books;
};

